// Hacker Rank DS Array Q.16

// Took me 3 hrs and saw youtube solution got it now...
// while loop limit 10000 * 10000 = 100000000 (10 Million)

#include<stdio.h>

void kangaroo(long int x1,long int v1,long int x2,long int v2);

int main()
{

    long int x1,v1,x2,v2;

    scanf("%ld %ld %ld %ld",&x1,&v1,&x2,&v2);

    kangaroo(x1,v1,x2,v2);

return 0;
}

void kangaroo(long int x1,long int v1,long int x2,long int v2)
{
    int flag=0;
   
    while(x1 < 100000000)
    {
        x1+=v1;
        x2+=v2;

        if(x1==x2)
        {
            flag=1;
            break;
        }
        
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    

}


/* 
if(k1!=k2)
    {
        do
        {
            if(k1!=k2)
            {
                k1+=v1;
                k2+=v2;

                
            }       
        } while (k1==k2);

       
       printf("%d",k1);
        printf("%d",k2);
    }

*/
/*
if(k1==k2)
    {
        printf("YES");
    }
    else if(k1 != k2)
    {
            while(k1 != k2)
            {
                k1+=v1;
                k2+=v2;

            
                if(k1==k2)
                {
                    printf("YES");
                }
            
            }

        printf("%d",k1);
        printf("%d",k2);
    }
    
*/
/*
k1+=v1;
            k2+=v2;

            if(k1==k2)
            {
                flag=1;
                printf("YES");
            }
            if(flag==0)
            {
                printf("NO");
                break;
            }
*/