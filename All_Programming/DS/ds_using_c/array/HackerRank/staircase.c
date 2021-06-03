// Hacker Rank DS Array Q.10

#include<stdio.h>

void staircase(int n);

int n;
int main()
{
    scanf("%d",&n);

    staircase(n);

return 0;
}

void staircase(int n)
{
    int i,j,k,l,m;


    for(i=0;i<n;i++)
    {
        k=n-i-1;

        for(j=0;j<k;j++)
        {    
            printf(" ");
                
        }
        l=n-k;
        //printf("%d",l);
       
        for(m=0;m<l;m++)
        {
            printf("#");
        }

        printf("\n");
    }
}