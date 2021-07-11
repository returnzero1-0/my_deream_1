#include<stdio.h>
#include<stdlib.h>

void beautifulDays(int i,int j, float k);	//i- stating day number j- ending day number k= the divisor
int reverseNumber(int i);

int main()
{
	int i,j;
	float k;
	
	scanf("%d %d %f",&i,&j,&k);
	
	beautifulDays(i,j,k);
	
return 0;
}


void beautifulDays(int i,int j, float k)
{

	int l=0,count=0;
	
	float res;
	float ax;
	
	int revReturn=0;
	
	for(l=i;l<=j;l++)
	{
		revReturn=reverseNumber(l);
	
		//printf("%d ",revReturn);

		ax=(float)abs(l-revReturn);
		
		res=ax/k;
		
		//printf("%.1f ",res);

		int cast=(int)res;		// main logic to check number is whole or not 
		if(cast==res)
		{
			count++;
		}
		
	
	}
	printf("%d",count);

}


int reverseNumber(int i)
{
	int rev=0;
	int rem;
	
	while(i!=0)
	{
		rem=i%10;
		rev=rev*10+rem;
		i/=10;	
	}

	return rev;
	//printf("%d",rev);

}