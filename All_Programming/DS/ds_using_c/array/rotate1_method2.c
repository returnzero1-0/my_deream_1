//write a function rotate(arr[],d,n) that rotates arr[] of size n by d elements 


#include<stdio.h>

#define MAX 100

void printArray(int arr[],int n);
void rotateLeftByOne(int arr[],int n);
void rotateNTimes(int arr[],int n,int d);

void main()
{
    int arr[MAX]={1,2,3,4,5};
    int n=5;
    int d=3;

    printf("\nArray before Rotate: ");
    printArray(arr,n);
    rotateNTimes(arr,n,d);
    printf("\nArray after Rotate: ");
    printArray(arr,n);

}

void rotateLeftByOne(int arr[],int n)
{
    int temp=arr[0];
    int i;
    for(i=0;i< (n-1) ;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

void rotateNTimes(int arr[],int n,int d)
{
    int i;
    for(i=0;i<d;i++)
    {
        rotateLeftByOne(arr,n);
    }
}

void printArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" %d |",arr[i]);
    }
    printf("\n");
}