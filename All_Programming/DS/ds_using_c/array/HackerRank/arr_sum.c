// Hacker Rank DS Array Q.5

#include<stdio.h>

int simpleArraySum(int arr[]);

int i;
int n;
int sum=0;

int main()
{
    
    scanf("%d",&n);
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    sum=simpleArraySum(arr);
    
    printf("%d",sum);
}

int simpleArraySum(int arr[])
{
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
return sum;
}
