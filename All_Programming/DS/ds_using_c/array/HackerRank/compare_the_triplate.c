// Hacker Rank DS Array Q.6
#include<stdio.h>

void compareTriplates(int a[3],int b[3]);

int main()
{
    int a[3];
    int b[3];

    int i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }

    compareTriplates(a,b);
return 0;
}

void compareTriplates(int a[3],int b[3])
{
    int i, score[2];
    int flagAlice=0, flagBob=0;

    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            flagAlice++;
        }
        if(a[i]<b[i])
        {
            flagBob++;
        }
    }
    score[0]=flagAlice;
    score[1]=flagBob;

    for(i=0;i<2;i++)
    {
        printf("%d ",score[i]);
    }

}

