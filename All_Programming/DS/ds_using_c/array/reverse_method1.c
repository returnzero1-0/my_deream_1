// HackerRank DS Array Q.1

#include<stdio.h>

int numberOfElem;

void reverseArray(int arr[]);
void printArray(int arr[]);

int main()
{
   

    scanf("%d",&numberOfElem);

     int arr[numberOfElem];

int i;

for(i=0;i<numberOfElem;i++)
{
    scanf("%d",&arr[i]);
}

    reverseArray(arr);
    
    printArray(arr);
}

void reverseArray(int arr[])
{
    int start=0;
    int end=numberOfElem-1;
    
    int temp;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void printArray(int arr[])
{
    int i;
    for(i=0;i<numberOfElem;i++)
    {
        printf("%d ",arr[i]);
    }
}
