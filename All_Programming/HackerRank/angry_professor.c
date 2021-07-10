#include<stdio.h>


void angryProfessor(int k, int a[],int n);

int main()
{
    int testcase;

    scanf("%d",&testcase);

    int i,j;
    for(i=0;i<testcase;i++)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n];
        
        for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);	
	}
	
	
	angryProfessor(k,a,n);
	
    }


return 0; 
}


void angryProfessor(int k, int a[],int n)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<=0)
		{
			count++;
		}
		
	}
	if(count<k)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	
    
}



