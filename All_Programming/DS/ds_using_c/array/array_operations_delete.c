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

//While deletion i should be at location to delete.

#include<stdio.h>

int main()
{
	int i,n,arr[20];
	
	printf("\nEnter number of elements :");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\nArr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	
			
// -----------------------------Print array -------------------------------------//
	printf("\nArray Elements are: |");
	
	for(i=0;i<n;i++)	// just printing or Traversing 
	{
		printf(" %d |",arr[i]);
	}
	printf("\n");
//------------------------------------------------------------------------------//
	
	int loc_del;
	
	printf("\nEnter location to delete element:");
	scanf("%d",&loc_del);
	
	
	for(i=loc_del;i<=n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	n=n-1;
	
	
		
// -----------------------------Print array -------------------------------------//
	printf("\nArray Elements After deletion are: |");
	
	for(i=0;i<n;i++)	// just printing or Traversing 
	{
		printf(" %d |",arr[i]);
	}
	printf("\n");
//------------------------------------------------------------------------------//
	
return 0;

}




