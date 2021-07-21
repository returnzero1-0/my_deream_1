#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    char arr[]={'c','r','o','w'};

    int count=pow(2,4);

    for(int i=0;i<count;i++)
    {
        for(int j=0;j<4;j++)
        {
            if((i & (1<< j))!=0)
            {
                cout<< arr[j]<<" ";
            }
        }
        if(i!=0)
        {
            cout<<"\n";

        }
        
    }
return 0;
}