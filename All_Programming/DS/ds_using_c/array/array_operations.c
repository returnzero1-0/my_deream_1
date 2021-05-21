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

#include<stdio.h>

int main()
{
	int i,n, arr[20];
	
	printf("\nEnter the number of elements in the array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)	//Get the array elements 
	{
		printf("\nEnter arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nArray Elements are: |");
	
	for(i=0;i<n;i++)	// just printing or Traversing 
	{
		printf(" %d |",arr[i]);
	}
	printf("\n");
return 0;

}
