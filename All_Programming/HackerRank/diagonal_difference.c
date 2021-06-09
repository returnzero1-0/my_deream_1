// Hacker Rank DS Array Q.8

#include<stdio.h>
#include<stdlib.h>

int n;

void diagonalDifference(int arr[n][n]);

int main()
{
    scanf("%d",&n);
    int arr[n][n];

    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    diagonalDifference(arr);

return 0;
}

void diagonalDifference(int arr[n][n])
{
    int i; 
    int diagonalLeft=0, diagonalRight=0;

    for(i=0;i<n;i++)
    {   
        diagonalLeft+=arr[i][i];
    }
    for(i=0;i<n;i++)
    {
        diagonalRight+=arr[i][n-i-1];
    }

    int diff=abs(diagonalLeft-diagonalRight);

    printf("%d",diff);    
}