// this program will print position of smallest number

#include<stdio.h>

void main()
{
	int arr[20],n,i,small,pos;
	float mean;
	
	printf("\nEnter number of elements :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nArray[%d] :",i);
		scanf("%d",&arr[i]);
	}
	
	small=arr[0];
	pos=0;
	
	for(i=0;i<n;i++)
	{
		if(arr[i] < small)
		{
			small=arr[i];
			pos=i;
		}
	}
	
	printf("\n%d is the smallest element at location %d.\n",small,pos);	
}
