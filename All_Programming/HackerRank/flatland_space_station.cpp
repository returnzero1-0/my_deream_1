#include<iostream>
using namespace std;

// Failing because of Time complexity


void flatlandSpaceStations(int n,long int cty[],long int l[],long int r[]);

int n,m;


int main()
{
    int x;
    cin>>n>>m;

    long int cty[n],l[n],r[n];

    for(int i=0;i<n;i++)
    {
        cty[i]=-1;
        l[i]=0;
        r[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        cin>>x;
        cty[x]=x;

    }


    flatlandSpaceStations(n,cty,l,r);


return 0;
}

void flatlandSpaceStations(int n,long int cty[],long int l[],long int r[])
{
    int p,q;
   
   for(int i=0;i<n;i++)
   {
           cout<<" i="<<i;

       p=q=0;

       for(int j=i, k=i;j<n || k >=0;j++,k--)
       {
           cout<<" j="<<j;
           cout<<" k="<<k;
           if(j<n)
           {
               if(cty[j]==-1)
               {
                   p++;
               }
               else
               {
                   r[i]=p;
                   break;
               }
           }
           if(k>=0)
           {
               if(cty[k]==-1)
               {
                   q++;
               }
               else
               {
                   l[i]=q;
                   break;
               }
           }

       }

   }

   int max1=r[0];
   int max2=l[0];

   for(int i=0;i<n;i++)
   {
       if(r[i]>max1)
       {
           max1=r[i];
       }

       if(l[i]>max2)
       {
           max2=l[i];
       }
   }

   if(max1>max2)
   {
       cout<<max1;
   }
   else
   {
       cout<<max2;
   }

}
