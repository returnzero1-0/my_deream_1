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
	printf("\nArray Elements  before Sorting: |");
	
	for(i=0;i<n;i++)	// just printing or Traversing 
	{
		printf(" %d |",arr[i]);
	}
	printf("\n");
//------------------------------------------------------------------------------//	
	
	
	// Sorting program //
	
	int j,tmp;
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
	}
	
// -----------------------------Print array -------------------------------------//
	printf("\nArray Elements  After Descending Sorting: |");
	
	for(i=0;i<n;i++)	// just printing or Traversing 
	{
		printf(" %d |",arr[i]);
	}
	printf("\n");
//------------------------------------------------------------------------------//	
}
