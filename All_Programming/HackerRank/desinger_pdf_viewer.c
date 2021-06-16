#include<stdio.h>
#include<string.h>

void designerPdfViewer(int h[26], char st[11]);
int main()
{
    int h[26],i;
    char st[11];

   

    for(i=0;i<25;i++)
    {
        scanf("%d",&h[i]);
    }

     scanf("%s",st);
    

    
    

    designerPdfViewer(h,st);



return 0;
}



void designerPdfViewer(int h[26], char st[11])
{
    int a=strlen(st);

    int i,b,max=0,area=0;
    

    for(i=0;i<a;i++)
    {
        b=st[i]-97;

        if(st[b]>max)
        {
            max=h[b];

        }

        
    }

    area=max*a;
    printf("%d",area);

}
