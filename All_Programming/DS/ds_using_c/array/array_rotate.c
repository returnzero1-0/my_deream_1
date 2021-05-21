#include<stdio.h>

void arrayRotateLeftOneTime(int arr[],int n)
{
	int i, temp=arr[0];
	for(i=0;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[n-1]=temp;
}

void arrayRotateLeft(int arr[],int t,int n)
{
	int i;
	for(i=0;i<t;i++)
	{
		arrayRotateLeftOneTime(arr,n);
	}
}

void arrayPrint(int arr[],int n)
{
	int i;
	printf("\nArray Elements are : |");
	for(i=0;i<n;i++)
	{
		printf(" %d |",arr[i]);
	}
}

void getArrayElements(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter arr[%d] =",i);
		scanf("%d",&arr[i]);
	}
}

int main()
{
	int arr[20],n;
	printf("\nEnter number of Array Elements :");
	scanf("%d",&n);
	getArrayElements(arr,n);
	printf("\nBefore array rotate:\n");
	arrayPrint(arr,n);
	arrayRotateLeft(arr,2,n);
	printf("\nAfter array rotate:\n");
	arrayPrint(arr,n);
	
return 0;
}
