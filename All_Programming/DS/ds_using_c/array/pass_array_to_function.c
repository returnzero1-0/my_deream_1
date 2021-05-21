/* Author -> Dhavlashree

Passing Arrays to Function

1-passing individual elements -> 1. Passsing data values 2. Passing Addresses
2- passing the entire array


*/

#include<stdio.h>

int main()
{
	int arr[5]={1,2,3,4,5};
	
	func1(arr[3]);			// 1. passing data values to function
	
	func2(&arr[3]);		// 2. Passing Addresses
	
	func3(arr);			// Passing the entire array
	
}

void func1(int num)
{
	printf("\nPassing data values : %d",num);
}

void func2(int *num)
{
	printf("\nPassing Addresses : %d",*num);
}

void func3(int arr[5])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n%d ",arr[i]);
	}
}


