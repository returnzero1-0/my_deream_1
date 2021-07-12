#include<iostream>
using namespace std;

void cutTheSticks(int sticks[]);

int length_of_cut(int sticks[]);

int lenght_of_array;
int main()
{
    cin>>lenght_of_array;
    int sticks[lenght_of_array];

    for(int i=0;i<lenght_of_array;i++)
    cin>>sticks[i];

    cutTheSticks(sticks);

return 0;
}

void cutTheSticks(int sticks[])
{

    for(int i=0;i<lenght_of_array;i++)
    {
        int cut_length=length_of_cut(sticks);
        int cut_count=0;


        for(int j=0;j<lenght_of_array;j++)
        {
                if(sticks[j]!=0)
                {
                    sticks[j]=sticks[j]-cut_length;
                    cut_count++;    

                } 
                if(sticks[j]<0)
                {
                    sticks[j]=0;
                }
              

        }
        if(cut_count!=0)
        {
            cout<<cut_count<<"\n";
        }
        
    }  
   
}


int length_of_cut(int sticks[])
{
    int small;
    for(int j=0;j<lenght_of_array;j++)
    {
        if(sticks[j]>0)
        {
            small=sticks[j];

        }
    }
    
    for(int j=0;j<lenght_of_array;j++)
    {
        if(sticks[j]>0)
        {
            if(sticks[j]<small)
            {
                small=sticks[j];
            }
        }
        
    }
return small;
    
}


