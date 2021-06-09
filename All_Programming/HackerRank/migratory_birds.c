#include<stdio.h>

void migratoryBirds(int arr[]);



int n;

int main()
{
    scanf("%d",&n);

    int arr[n];

    int i;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    migratoryBirds(arr);

return 0;
}

void migratoryBirds(int arr[])
{
    int i,count,countArr[6]={0},max,ans;


    // make Frequency array 

    

    /*

        input array = 1 4 4 4 5 3

        if input array element match with countArr index then increment.

                 0   1   2   3   4   5
    countArr[6]={0}  1   0   1   3   1
    */

    for(i=0;i<n;i++)
    {
        countArr[arr[i]]++;
    }

/*

for(i=1;i<6;i++)
    {
        printf("%d ",countArr[i]);
    }

*/
    
    max=countArr[1];

    for(i=2;i<6;i++)
    {
        if(countArr[i] > max)
        {
            max=countArr[i];
            ans=i;
        }
    }

    printf("%d",ans);

}

