// Hacker Rank DS Array Q.2

#include<stdio.h>


void rotateLeftByOne(int arr[],int numberOfElem);
void rotateLeft(int d,int arr[]);
void printArray(int arr[]);

int numberOfElem,d;

int main()
{
    scanf("%d %d",&numberOfElem,&d);
 
    int arr[numberOfElem];

    int i;
    for(i=0;i<numberOfElem;i++)
    {
        scanf("%d",&arr[i]);
    }

    rotateLeft(d,arr);

    printArray(arr);

return 0;
}

void rotateLeftByOne(int arr[],int numberOfElem)
{
    int temp=arr[0];
    
    int i;
    for(i=0;i < (numberOfElem-1);i++)
    {
        arr[i]=arr[i+1];
    }
    arr[numberOfElem-1]=temp;


}

void rotateLeft(int d,int arr[])
{
    
    int i;
    for(i=0;i<d;i++)
    {
       rotateLeftByOne(arr,numberOfElem); 
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

