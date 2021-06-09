// Hacker Rank DS Array Q.7

#include<stdio.h>

void aVeryBigSum(int arr[]);

int num;

int main()
{
    scanf("%d",&num);
    int arr[num];

    int i;
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    aVeryBigSum(arr);


return 0;
}


void aVeryBigSum(int arr[])
{
    int i;
    long int bigSum=0;

    for(i=0;i<num;i++)
    {
        bigSum=bigSum+arr[i];
    }

    printf("%ld",bigSum);
}