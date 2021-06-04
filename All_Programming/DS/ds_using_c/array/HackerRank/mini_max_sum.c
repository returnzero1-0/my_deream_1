// Hacker Rank DS Array Q.11

#include<stdio.h>

void miniMaxSum(int arr[]);

int main()
{
    int arr[5];
  

    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    miniMaxSum(arr);


return 0;
}

void miniMaxSum(int arr[])
{
    
    long long int maxNumber=arr[0], minNumber=arr[0];
    int maxLocation=0,minLocation=0;

    int i;
    for(i=0;i<5;i++)
    {
        if(maxNumber<arr[i])
        {
            maxNumber=arr[i];
            maxLocation=i;
        }
        if(minNumber>arr[i])
        {
            minNumber=arr[i];
            minLocation=i;
        }
    }
  

    long long int minSum=0, maxSum=0;

    for(i=0;i<5;i++)
    {
        if(maxLocation!=i)
        {
            minSum+=arr[i];
        }

        if(minLocation!=i)
        {
            maxSum+=arr[i];
        }
    }
    printf("%lld %lld",minSum,maxSum);
    
    
}
