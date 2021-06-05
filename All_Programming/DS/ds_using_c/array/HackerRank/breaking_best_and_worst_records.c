// Hacker Rank DS Array Q.18

#include<stdio.h>

int n;

void breakingRecords(int scores[]);

int main()
{
    scanf("%d",&n);

    int scroes[n];

    int i;

    for(i=0;i<n;i++)
    scanf("%d",&scroes[i]);

    breakingRecords(scroes);

return 0;
}

void breakingRecords(int scores[])
{
    int min=scores[0], max=scores[0];
    int minCount=0, maxCount=0;

    //printf("min=%d ",min);
    //printf("max=%d \n",max);
    int i;
    for(i=1;i<n;i++)
    {
        if(scores[i] > max)
        {
            max=scores[i];
            maxCount++;
        }
        if(scores[i]< min)
        {
            min=scores[i];
            minCount++;
        }
        //printf("min=%d ",min);
        //printf("max=%d \n",max);
    }
    printf("%d %d",maxCount, minCount);
}
