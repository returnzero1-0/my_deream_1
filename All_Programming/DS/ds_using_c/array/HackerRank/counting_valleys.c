#include<stdio.h>


void countingValleys(int steps, char path[]);

int main()
{
    int steps;

    scanf("%d",&steps);

    char path[steps];

    int i;
    for(i=0;i<steps;i++)
    {
        scanf("%c",&path[i]);
    }

    countingValleys(steps,path);

return 0;
}

void countingValleys(int steps, char path[])
{
    int sum=0,count=0,i;
    

    for(i=0;i<steps;i++)
    {
        if(path[i]=='U')
        {
            //printf("%d ",++sum);
            if(++sum==0)
            {
                
                count++;
               // printf("count=%d ",sum);

            }
        
        }
        else
        {
            sum--;
           //printf("sum=%d ",sum);
        }
    }
    printf("%d",count);
}