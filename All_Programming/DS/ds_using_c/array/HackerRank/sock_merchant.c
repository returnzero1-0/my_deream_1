#include<stdio.h>

void sockMerchant(int n, int arr[]);

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    sockMerchant(n,arr);

return 0;
}

void sockMerchant(int n, int arr[])
{
    int socksPairCouter[101]={0};

    int i,count=0;
    for(i=0;i<n;i++)
    {
        socksPairCouter[arr[i]]++;   
    }
/*
    for(i=1;i<100;i++)
    {
        
        printf("%d\n",socksPairCouter[i]);
    }
*/
int notZero,Zero;

for(i=1;i<101;i++)
{
    if(socksPairCouter[i]%2 != 0)
    {
            notZero=socksPairCouter[i]-1;

            notZero/=2;
        
                count+=notZero;
            
    }
    else if(socksPairCouter[i]%2 ==0)
    {
        Zero=socksPairCouter[i]/2;
        count+=Zero;

    }

    

}
    

printf("%d",count);

    


}