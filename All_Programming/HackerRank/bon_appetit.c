#include<stdio.h>

void bonAppetit(int bill[],int k,int b);

int n,k;

int main()
{

    scanf("%d %d",&n,&k);   //out of n prices ana dosent want to eat k'th item.

    int bill[n],b;

    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&bill[i]);
    }

    scanf("%d",&b); // brian will charge ana  

    bonAppetit(bill,k,b);

return 0;
}

void bonAppetit(int bill[],int k,int b)
{
    int i,anaTotal=0,actualtotal=0,refund;
    
    for(i=0;i<n;i++)
    {
        if(i!=k)
        {
            anaTotal+=bill[i];
            
        }
        actualtotal+=bill[i];
    }
    anaTotal/=2;
    actualtotal/=2;
    
    //printf("Ana total=%d",anaTotal);
    //printf("\nActual total=%d",actualtotal);

    if(anaTotal==b)
    {
        printf("Bon Appetit");
    }
    else
    {
        refund=b-anaTotal;
        printf("%d",refund);
    }

}


