//write a function rotate(arr[],d,n) that rotates arr[] of size n by d elements 

#include<stdio.h>
# define MAX 100

void printarray(int arr[],int n);
void rotate(int arr[],int n,int d);

void main()
{
    int arr[MAX]={1,2,3,4,5,6,7,8,9,10};
    int n=10,d=5;

    printf("\nArray before Rotate: ");
    printarray(arr,n);

    rotate(arr,n,d);

     printf("\nArray after Rotate: ");
    printarray(arr,n);
}

void rotate(int arr[],int n,int d)
{
    int num=n;
    int element=d;

    int temparr[d];
    int i;

    for(i=0;i<d;i++)
    {
        temparr[i]=arr[i];
    }
/*
    for(i=0;i<d;i++)
    {
       // printf(" %d |",temparr[i]);
    }
*/
    for(i=0;i<n;i++)
    {
        arr[i]=arr[d];
        d++;
       // printf("\narr[%d]=%d",i,arr[i]);
    }
 //   printf("\n");

    int f=num-element;
 
    for(i=0;i<n;i++)
    {
        arr[i+f]=temparr[i];
        //printf("\narr[%d]=%d",i+f,arr[i+f]);
    }

}

void printarray(int arr[],int n)
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf(" %d |",arr[i]);
    }
    printf("\n");
}