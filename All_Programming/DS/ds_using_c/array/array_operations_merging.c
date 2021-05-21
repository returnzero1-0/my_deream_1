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
	int arr1[10],arr2[10],arr3[20],n1,n2,i;
	
	printf("\nEnter number of elements for Arr-1: ");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		printf("\nEnter Arr[%d] =>",i);
		scanf("%d",&arr1[i]);
	}
	
	printf("\nEnter number of elements for Arr-2: ");
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{
		printf("\nEnter Arr[%d] =>",i);
		scanf("%d",&arr2[i]);
	}
	
	int merged_n,index=0;
	
	merged_n=n1+n2;
	
	for(i=0;i<n1;i++)
	{
		arr3[index]=arr1[i];
		index++;
	}
	
	for(i=0;i<n2;i++)
	{
		arr3[index]=arr2[i];
		index++;
	}
	
	
// -----------------------------Print array -------------------------------------//
	printf("\nMerged Array Elements are: |");
	
	for(i=0;i<merged_n;i++)	// just printing or Traversing 
	{
		printf(" %d |",arr3[i]);
	}
	printf("\n");
//------------------------------------------------------------------------------//
return 0;	
}
