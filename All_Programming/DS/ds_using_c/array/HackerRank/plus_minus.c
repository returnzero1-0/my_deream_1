// Hacker Rank DS Array Q.9

#include<stdio.h>

void plusMinus(int arr[]);

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

    plusMinus(arr);

return 0;
}

void plusMinus(int arr[])
{
    float countPositive=0, countNegative=0, countZero=0;

    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            countPositive++;
        }
        else if(arr[i]<0)
        {
            countNegative++;
        }
        else if(arr[i]==0)
        {
            countZero++;
        }
    }

    countPositive=countPositive/n;
    countNegative=countNegative/n;
    countZero=countZero/n;

    printf("%.6f",countPositive);
    printf("\n%.6f",countNegative);
    printf("\n%.6f",countZero);
}