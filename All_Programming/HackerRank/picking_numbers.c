#include<stdio.h>
#include<stdlib.h>

void pickingNumbers(int arr[]);

int n;
int main()
{
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    pickingNumbers(arr);


return 0;
}

void pickingNumbers(int arr[])
{
    int i,j,count=0,max=0, b[n];


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((arr[i]==arr[j]) || (arr[i]+1==arr[j]))
            {
                count++;

            }
        }
        b[i]=count;
        count=0;

        

        
    }

    max=b[0];
    for(i=0;i<n;i++)
    {
        //printf("%d ",b[i]);

        if(b[i]>max)
        {
            max=b[i];
        }
        
    }
    
    printf("%d",max);
    



}
