// Hacker Rank DS Array Q.11

#include<stdio.h>

void birthdayCakeCandles(int candles[]);

int n;
int main()
{
    scanf("%d",&n);
    int candles[n];

    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&candles[i]);
    }

    birthdayCakeCandles(candles);

return 0;
}

void birthdayCakeCandles(int candles[])
{
    int i,maxNumber=candles[0],tallCandleCount=0;

    for(i=0;i<n;i++)
    {
        if(maxNumber<candles[i])
        {
            maxNumber=candles[i];
        }
        
        
        
    }
   // printf("\nMax number=%d",maxNumber);

    for(i=0;i<n;i++)
    {
        if(maxNumber==candles[i])
        {
            tallCandleCount++;
        }
    }


    printf("%d",tallCandleCount);

}