// this will find second largest number number in array

#include<stdio.h>

void main()
{
	int arr[20],n,i,large1,large1_pos,large2,large2_pos;
	float mean;
	
	printf("\nEnter number of elements :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nArray[%d] :",i);
		scanf("%d",&arr[i]);
	}
	
	large1=arr[0];
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>large1)
		{
			large1=arr[i];
		}
		
	}
	printf("\nfirst large is :%d",large1);
	
	large2=arr[0];
	
	
	for(i=0;i<n;i++)
	{
		if(arr[i]!=large1)
		{
			if(arr[i]>large2)
			{
				large2=arr[i];
			}
		}
	}
	printf("\nsecond large is :%d\n",large2);
	
	
}
	
