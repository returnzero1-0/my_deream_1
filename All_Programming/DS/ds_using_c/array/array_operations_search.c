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
	int i,n,arr[15];
	
	printf("\nEnter number of elements :");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\nArr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	
	int val_to_search,count=0;
	
	printf("\nEnter element to search :");
	scanf("%d",&val_to_search);
	
// -----------------------------Print array -------------------------------------//
	printf("\nArray Elements are: |");
	
	for(i=0;i<n;i++)	// just printing or Traversing 
	{
		printf(" %d |",arr[i]);
	}
	printf("\n");
//------------------------------------------------------------------------------//

	printf("\nvalue %d present at location :",val_to_search);
	for(i=0;i<n;i++)
	{
		if(val_to_search==arr[i])
		{
			count=count+1;
			
			printf(" %d ",i);
			
		}
	}
	if(count==0)
	{
		printf("\n%d is not present in this array!!!\n",val_to_search);
	}
	else
	{
		printf("\nvalue %d is present %d times in this array.\n",val_to_search,count);
	}
return 0;

}
