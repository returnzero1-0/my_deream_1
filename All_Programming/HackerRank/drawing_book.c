#include<stdio.h>

void pageCount(int n,int p);

int main()
{
    int n,p;        // n is number of pages in the book, p is page to visit

    scanf("%d",&n);
    scanf("%d",&p);

    pageCount(n,p);

return 0;
}

void pageCount(int n,int p)
{
    int front,back;

    front=p/2;
    //printf("f=%d",front);
    //printf("n/2=%d",n/2);
    
    back=n/2 - p/2;
    //printf("b= %d",back);

    if(front<back)
    {
        printf("%d",front);

    }
    else
    {
       printf("%d",back);

    }
    

}


/*

 if((i==p))
            {
                count=count;

            }
            else if(i!=p && i==1)
            {
                count++;

                i+=1;
                if(i==p && i+1 !=p)
                {
                    count; 
                }
                else if(i !=p && i+1 ==p)
                {
                    count; 
                }

            }
            else
            {
                i+=1;
                if(i!=p && i-1 !=p)
                {
                    count++;

                    if(i==p && i+1 !=p)
                    {
                        count; 
                     }
                else if(i !=p && i+1 ==p)
                {
                    count; 
                }


                }

            }
               



            
            else if(i!=p && i+1 !=p)
            {
                count++;
                i+=1;

                if(i==p && i+1 !=p)
                {
                    count; 
                }
                else if(i !=p && i+1 ==p)
                {
                    count; 
                }
                
            }
            */
            //printf("%d ",count);


            /*
            // not turn page

            if(i==p && i+1 !=p)
            {
               count=count; 
            }
            if(i-1 !=p && i==p)
            {
                count=count; 
            }
            */

            // When to turn page 

            /*
            // turn page

            if(i!=p && i==1)
            {
                count++;
            }
            else if(i!=p && i+1 !=p)
            {
                count++;
            }
            */ 