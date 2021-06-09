// Hacker Rank DS Array Q.17

#include<stdio.h>

void getTotalX(int a[],int b[]);

int n,m;

int main()
{
    scanf("%d %d",&n,&m);

    int a[n],b[m];

    int i;

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<m;i++)
    scanf("%d",&b[i]);

    getTotalX(a,b);


return 0;
}

/*
Example INPUT : 

2 3
[2 4]
[16 32 96]
*/

void getTotalX(int a[],int b[])
{
   int i,j=0,k, a_last=a[n-1],flag=0,temp[100],count=0;

   while(a_last <=b[0])     // runs till a_last will become b[0]
   {
       for(i=0;i<n;i++) //runs n'th times
       {
           if(a_last % a[i]==0)
           {
               flag=1;
           }
           else
           {
               flag=0;
               break;
           }  
       }
       if(flag==1)
        {
            temp[j]=a_last;
            j++;
        }
       
     a_last++;
   }
/*
for(i=0;i<j;i++)
        {
            printf("%d ",temp[i]);
        }
*/

   for(i=0;i<j;i++)         //will run j'th times
   {
       for(k=0;k<m;k++)     //will run k'th times
       {
           if(b[k] % temp[i] == 0)
           {
               flag=1;
           }
           else
           {
               flag=0;
               break;
           }
       }
       if(flag==1)
       {
           count++;
        }
   }
   printf("%d",count);
         
}