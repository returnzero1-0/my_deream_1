/* Author -> Dhavalshree 

Operations on Array 

1-Initialization
2-Traversing
3-Inserting
4-Searching
5-Deleting
6-Merging
7-Sorting

*/

// While insertion i should be on top of array

#include<stdio.h>

int main()
{
	int i,n, arr[20];
	int val_to_insert, at_location;
	
	printf("\nEnter the number of elements in the array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)	//Get the array elements 
	{
		printf("\nEnter arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nEnter the location :"); 	//location we have
	scanf("%d",&at_location);
	
	printf("\nEnter the value :");	// element we have 
	scanf("%d",&val_to_insert);
	
	
	for(i=n-1;i>=at_location;i--)		// logic to Insert inbetween the array
	{
		arr[i+1]=arr[i];
	}
	
	arr[at_location]=val_to_insert;
	n=n+1;
	
	printf("\nArray after instertion of %d is : |",val_to_insert);
	
	for(i=0;i<n;i++)	// just printing or Traversing 
	{
		printf(" %d |",arr[i]);
	}
	printf("\n");
	
return 0;
}
