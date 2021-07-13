#include<iostream>
using namespace std;

void workbook(int n,int k, int arr[]);

int n;
int main()
{
    int k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    workbook(n,k,arr);

return 0;
}

void workbook(int n,int k,int arr[])
{
    // Find Page Count
    int page_count=0;
    int t;

    for(int i=0;i<n;i++)
    { 
        if(arr[i]>k)
        {
            t=arr[i];

            if(t>=0)
            {
                while (1)
                {
                    t=t-k;
                    page_count++;
                    if(t<=0)
                    {
                        break;
                    }
                }   
            }
        }
        if(arr[i]<k)
        {
            page_count++;
            
        }

    }
    //cout<<page_count<<" ";

    int pg=1;
    int sp=0;
    int m;
    
    for(int j=0;j<4;j++)
    {
        m=arr[j];
        //cout<<m<<" ";
       
       cout<<"Curr pg="<<pg<<" ";
        if(m>k)
        {
           
            
            while(1)
            {
                m=m-k;

                


                
            }     

        }
        if(m<k)
        {
            sp=sp;
            pg++;
        }
        if(m==k && pg==1)
        {
            sp++;
            pg++;

        }

   
                
            
    }   
    
cout<<"Secial_page ="<<sp<<" ";
}
/*
#include<iostream>
using namespace std;

void workbook(int n,int k, int arr[]);

int n;
int main()
{
    int k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    workbook(n,k,arr);

return 0;
}

void workbook(int n,int k,int arr[])
{
    // Find Page Count
    int page_count=0;
    int t;

    for(int i=0;i<n;i++)
    { 
        if(arr[i]>k)
        {
            t=arr[i];

            if(t>=0)
            {
                while (1)
                {
                    t=t-k;
                    page_count++;
                    if(t<=0)
                    {
                        break;
                    }
                }   
            }
        }
        if(arr[i]<k)
        {
            page_count++;
            
        }

    }
    cout<<page_count<<" ";

    int pg=1;
    int sp=0;
    int m;
    
    for(int j=0;j<n;j++)
    {
        m=arr[j];
        //cout<<m<<" ";
       
        if(m>k)
        {
           
            
            while(1)
            {
                
                m=m-k;
            
                if(m!=0 && pg==1)
                {
                    sp++;
                    pg++;
                }
                if(m<0 && pg>1)
                {
                    sp=sp;
                    pg++;
                    break;
                }

                if(m!=0 && pg >1)
                {
                    sp=sp;
                    pg++;
                }
                if(m==0 && pg > 1)
                {
                    sp++;
                    pg++;
                    break;
                }


                if(m>0 && pg>1)
                {
                    sp=sp;
                    pg++;
                }
                if(m==1 && pg > 1)
                {
                    sp++;
                    pg++;
                }
                if(m<0 && pg==page_count)
                {
                    sp++;
                    pg++;
                    break;
                }
            

            }      

        }
        if(m<k)
        {
            sp=sp;
            pg++;
        }
        if(m==k && pg==1)
        {
            sp++;
            pg++;

        }

   
                
            
    }   
    
cout<<sp<<" ";
}
*/

/*
#include<iostream>
using namespace std;

void workbook(int n,int k, int arr[]);

int n;
int main()
{
    int k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    workbook(n,k,arr);

return 0;
}

void workbook(int n,int k,int arr[])
{
    // Find Page Count
    int page_count=0;
    int t;

    for(int i=0;i<n;i++)
    { 
        if(arr[i]>k)
        {
            t=arr[i];

            if(t>=0)
            {
                while (1)
                {
                    t=t-k;
                    page_count++;
                    if(t<=0)
                    {
                        break;
                    }
                }   
            }
        }
        if(arr[i]<k)
        {
            page_count++;
            
        }

    }

    int pg=1;
    int sp=0;
    int m;
    
    for(int j=0;j<5;j++)
    {
        m=arr[j];
        //cout<<m<<" ";
       
        if(m>k)
        {
           
            
            while(1)
            {
                
                m=m-k;
            
                if(m!=0 && pg==1)
                {
                    sp++;
                    pg++;
                }
                if(m<0 && pg>1)
                {
                    sp=sp;
                    pg++;
                    break;
                }

                if(m!=0 && pg >1)
                {
                    sp=sp;
                    pg++;
                }
                if(m==0 && pg > 1)
                {
                    sp++;
                    pg++;
                    break;
                }


                if(m>0 && pg>1)
                {
                    sp=sp;
                    pg++;
                }
                if(m==1 && pg > 1)
                {
                    sp++;
                    pg++;
                }
                if(m<0 && pg==page_count)
                {
                    sp++;
                    pg++;
                    break;
                }
            

            }      

        }
        if(m<k)
        {
            sp=sp;
            pg++;
        }
        if(m==k && pg==1)
        {
            sp++;
            pg++;

        }

   
                
            
    }   
    
cout<<sp<<" ";
}


*/

            

/*
            if(m==k)
            {
                sp++;

            }
*/
    
       
   



/*

if(m>k)
            {
                while(1)
                {
                    m=m-k;
                    if(m!=0)
                    {
                        sp=sp;
                    }
                    if(m==0)
                    {
                        sp++;
                        break;
                    }
                }
            }

            if(m>k)
            {
                while(1)
                {
                    m=m-k;
                    if(m!=0 && m==1)
                    {
                        sp++;
                    }
                    if(m<0)
                    {
                        sp++;
                        break;
                    }
                    
                }

            }

*/




/*
        if(arr[i]>k)
        {
            while(1)
            {
                arr1[i]=arr[i]-k;
                cout<<arr[i]<<" ";
                if(arr1[i]<=0)
                {
                    break;
                }

            }

        }
        */


/*

 // Find Page Count
    int page_count=0;
    int t;

    for(int i=0;i<n;i++)
    { 
        if(arr[i]>k)
        {
            t=arr[i];

            if(t>=0)
            {
                while (1)
                {
                    t=t-k;
                    page_count++;
                    if(t<=0)
                    {
                        break;
                    }
                }   
            }
        }
        if(arr[i]<k)
        {
            page_count++;
            
        }

    }
    //cout<<"Pages ="<<page_count<<" ";

    // find chapter count

    int chapter_count=0,p;

    for(int i=0;i<n;i++)
    {
        p=arr[i];

        if(p<k && i==0)
        {
            chapter_count=chapter_count;
        }
        if(p<k)
        {
            chapter_count++;
        }

        if(p>k)
        {
            while(1)
            {
                p=p-k;

                if(p!=0)
                {
                    chapter_count=chapter_count;
                }
                if(p<=0)
                {
                    chapter_count++;
                    break;
                }
            }
        }
    }
    //cout<<"Chapter ="<<ch<<" ";
*/