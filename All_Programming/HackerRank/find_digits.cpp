#include<iostream>
using namespace std;


void findDIgits(long int number);

int main()
{
    int test_cases;
    long int number;
    cin>>test_cases;

    for(int i=0;i<test_cases;i++)
    {
        cin >> number;
        findDIgits(number);
    }
    


return 0;
}

void findDIgits(long int number)
{
    int n=number;
    int rem=0,count=0;


    while (number > 0)
    {
        rem=number % 10;
        //cout<<rem << " ";

        if(rem==0)
        {
            count=count;
        }
        else if(n % rem ==0)
        {   
            count++;
        }
        
    
        number/=10;
    }
    cout<<count <<"\n";
    
}