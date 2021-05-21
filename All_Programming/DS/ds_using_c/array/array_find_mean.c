// This will find mean from n elements of array


#include<stdio.h>

void main()
{
	int arr[20],n,i,total=0;
	float mean;
	
	printf("\nEnter number of elements :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nArray[%d] :",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		total=total+arr[i];
		mean=(float)total/n;
	}
	printf("\n Mean is :%.2f",mean);

}
