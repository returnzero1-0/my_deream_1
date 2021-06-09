#include<stdio.h>
#include<stdlib.h>

void catAndMouse(int a,int b,int m);

int main()
{
    int queries;
    scanf("%d",&queries);
    
    int a[queries];
    int b[queries];
    int m[queries];
    
    int i;
    for(i=0;i<queries;i++)
    {
        scanf("%d %d %d",&a[i],&b[i],&m[i]);
        //printf("%d %d %d",a[i],b[i],m[i]);
        //printf("\n");
    }
    for(i=0;i<queries;i++)
    {
        catAndMouse(a[i],b[i],m[i]);
    }
    
    
return 0;
}

void catAndMouse(int a,int b,int m)
{
    int catA=abs(a-m);
    int catB=abs(b-m);
    
    if(catA<catB)
    {
        printf("Cat A\n");
    }
    if(catB<catA)
    {
        printf("Cat B\n");
    }
    if(catA==catB || catB==catA)
    {
        printf("Mouse C\n");
    } 
}
