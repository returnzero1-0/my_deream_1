// Hacker Rank DS Array Q.15

#include<stdio.h>
int m,n,i;

void countAppleAndOranges(int s,int t,int a,int b,int apples[],int oranges[]);


int main()
{
    int s,t,a,b;
    
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);

    int apples[m],oranges[n];


    for(i=0;i<m;i++)
    {
        scanf("%d",&apples[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&oranges[i]);
    }

    countAppleAndOranges(s,t,a,b,apples,oranges);

return 0;
}

void countAppleAndOranges(int s,int t,int a,int b,int apples[],int oranges[])
{
    int applesCount=0, orangesCount=0;
  
    for(i=0;i<m;i++)                        //counts apple which are fall on Sam's house
    {
        if(a+apples[i] >= s &&  a+apples[i] <= t)
        {
            applesCount++;
        }
    }

    for(i=0;i<n;i++)                        //counts oranges which are fall on Sam's house
    {
        if(b+oranges[i] >= s && b+oranges[i] <= t)
        {
            orangesCount++;
        }
    }

    printf("%d\n%d",applesCount,orangesCount);
}
