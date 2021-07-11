#include<iostream>
using namespace std;


void viralAdvertising(int n);

int main()
{
    int n;
    cin >>n;

    viralAdvertising(n);


return 0;
}

void viralAdvertising(int n)
{

   int i,people=5;

   int shared=0,liked=0,cumulative=0;

   shared=people;
   liked=shared/2;
   cumulative=liked;

   for(i=1;i<n;i++)
   {
       shared=liked*3;
       liked=shared/2;
       cumulative=cumulative+liked;
   }
   cout << cumulative;

}


/*

#include<iostream>
using namespace std;


void viralAdvertising(int n);

int main()
{
    int n;
    cin >>n;

    viralAdvertising(n);


return 0;
}

void viralAdvertising(int n)
{

    int i,like=0,people=5,l;
    for(i=0;i<n;i++)
    {
        if(i!=0)
        {
            people=(people/2)*3;
        }
    l=people/2;
    like=like+l;

    }
    

    cout <<like;
}
*/