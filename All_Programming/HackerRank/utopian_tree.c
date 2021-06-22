#include<stdio.h>

void utopianTree(int t,int arr[]);

int t;
int main()
{
    int arr[60];

    scanf("%d",&t);

    int i;
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }

    utopianTree(t,arr);

    

    
return 0;
}

void utopianTree(int t,int arr[])
{
    int i,j;
    long long int height=0;

    long int temp[100];

    for(i=0;i<=60;i++)
    {
        if(i%2==0)
        {
            height=height+1;
            temp[i]=height;
        }
        else
        {
            height=height*2;
            temp[i]=height;
        }
    }




i=0;
j=0;
while(i<=61)
    {
        //printf("%ld\n",temp[i]);

        if(arr[j]==i)
        {
            printf("%ld\n",temp[i]);
            j++;
            i=0;
        }
        i++;
    }

    
    
}