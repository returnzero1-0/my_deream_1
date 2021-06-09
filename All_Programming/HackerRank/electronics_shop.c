#include<stdio.h>

void getMoneySpent(int b,int keyboards[],int drives[]);

int n,m;

int main()
{
    int b;
    scanf("%d %d %d",&b,&n,&m);

    int keyboards[n],drives[m];

    int i;
    for(i=0;i<n;i++)
    scanf("%d",&keyboards[i]);

    for(i=0;i<m;i++)
    scanf("%d",&drives[i]);

    getMoneySpent(b,keyboards,drives);

return 0;
}

void getMoneySpent(int b,int keyboards[],int drives[])
{
    int i,j,total[n][m],sum=0,num=-1;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum=keyboards[i]+drives[j];
            if(sum>num&&sum<=b)
            {
                num=sum;
            }
        }
    }
    printf("%d",num);
}