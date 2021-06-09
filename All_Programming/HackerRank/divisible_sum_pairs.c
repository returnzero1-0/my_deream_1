// Hacker Rank DS Array Q.20

#include<stdio.h>

void divisibleSumPairs(int n,int arr[],int k);

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);

    int arr[n];
    
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    divisibleSumPairs(n,arr,k);
    

return 0;
}

void divisibleSumPairs(int n,int arr[],int k)
{
    int i,j,count=0;

    for(i=0;i<n;i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if((arr[i]+arr[j]) % k == 0)
            {
                count++;
            }
        }
    }
    printf("%d",count);
}