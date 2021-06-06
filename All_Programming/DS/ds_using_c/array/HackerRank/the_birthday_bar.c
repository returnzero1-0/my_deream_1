// Hacker Rank DS Array Q.19

#include<stdio.h>

int n;

void birthday(int s[],int d,int m);
int main()
{
    
   
    scanf("%d",&n);
    int s[n];

    int i;
    for(i=0;i<n;i++)
    scanf("%d",&s[i]);

    int d,m;
    scanf("%d %d",&d,&m);

    if((n>=1 && n<=100) && (d>=1 && d<=31) && (m>=1 && m<=12))
    {    

            birthday(s,d,m);

    }
    

return 0;
}

void birthday(int s[],int d,int m)
{
    int i,sum,chocolateSquareCount=0,j;

    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<(i+m);j++) //this loop will run from (i-th position to i+m)
        {
            sum+=s[j];
        }
        if(sum==d)
        {
            chocolateSquareCount++;
        }
        
    }
    printf("%d",chocolateSquareCount);
    
        
    
}

// inner loop will run "(m -1) times"

/*
loc=i;

        if(loc<=n-1)
        {
            sum+=s[i];
            chocolateSquareCount++;
            loc=i;
        }




sum+=s[i];

        if(sum==d)
        {
            chocolateSquareCount++;
            loc=i;
        }
        else
        {
            sum=0;
            if(loc <= n-1)
            {
                for(j=i+1;j<loc+1;j++)
                {
                    sum+=s[j];
                    chocolateSquareCount++;

                }
            }
        }
        
*/