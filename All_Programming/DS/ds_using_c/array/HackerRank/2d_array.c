//// Hacker Rank DS Array Q.3

#include<stdio.h>

int i,j,sum=0,max,flag=1;
int arr[6][6];


void hourglassSum(int arr[6][6]);

int main()
{
    

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    hourglassSum(arr);

return 0;
}

void hourglassSum(int arr[6][6])
{
    for(i=1;i<5;i++)
    {
        for(j=1;j<5;j++)
        {
            sum=arr[i][j]+arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];

            if(flag==1)
            {
                max=sum;
                flag=0;
            }
            if(max<sum)
            {
                max=sum;
            }
        }
    }
    printf("%d",max);

}
