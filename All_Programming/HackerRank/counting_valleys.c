#include<stdio.h>


void countingValleys(int steps, char path[]);

int main()
{
    int steps;

    scanf("%d",&steps);

    char path[steps];

    
    scanf("%s",path);
    

    countingValleys(steps,path);

return 0;
}

void countingValleys(int steps, char path[])
{
    int i,count=0,data[steps],d=0;


    for(i=0;i<=steps;i++)
    {
        
        if(path[i]=='U')
        {
            d=d+1;
            //printf("U= %d ",d);
            data[i]=d;
        }
        if(path[i]=='D')
        {
            d=d-1;
            //printf("D=%d ",d);
            data[i]=d;
        }

        //printf("%d ",data[i]);
        
       
    }

for(i=0;i<steps;i++)
{
    //printf("%d ",data[i]);
    
    if(data[i]<0 && data[i+1]==0)
    {
        count++;
    }
} 

printf("%d",count);
  
 
}



/*
int sum=0,count=0,i;
    

    for(i=0;i<steps;i++)
    {
        if(path[i]=='U')
        {
            //printf("%d ",++sum);
            if(++sum==0)
            {
                
                count++;
               // printf("count=%d ",sum);

            }
        
        }
        else
        {
            sum--;
           //printf("sum=%d ",sum);
        }
    }
    printf("%d",count);
*/