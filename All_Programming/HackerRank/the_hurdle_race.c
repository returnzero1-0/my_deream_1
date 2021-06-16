#include<stdio.h>

void hurdleRace(int k,int height[]);

int n;
int main()
{
    int k;
    scanf("%d %d",&n,&k);

    int i,height[n];
    for(i=0;i<n;i++)
        scanf("%d",&height[i]);

    
    hurdleRace(k, height);

return 0;
}

void hurdleRace(int k,int height[])
{
    int i,max=0;

    max=height[0];
    for(i=0;i<n;i++)
    {
        if(height[i]>max)
        {
            max=height[i];
        }
    }

    if(k==max || k>max)
    {
        printf("0");
    }
    else if(k!=max)
    {
        printf("%d",max-k);
    }

    //printf("%d",max);
}