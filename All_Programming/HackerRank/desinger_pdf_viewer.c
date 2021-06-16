#include<stdio.h>
#include<string.h>

void designerPdfViewer(int h[26],char st[]);

int main()
{
    char st[11];
    int h[26];

    int i;
    for(i=0;i<26;i++)
    {
        scanf("%d",&h[i]);
    }

    scanf("%s",st);

    designerPdfViewer(h,st);


    
return 0;
}

void designerPdfViewer(int h[26],char st[])
{
    int leng=strlen(st);

    int i,pos=0, max=0,area=0;
    for(i=0;i<leng;i++)
    {
        pos=st[i]-97;

        //printf("ascii=%d ",st[i]); //this will print ascii value
        //printf("pos=%d ",pos); //this will position
        
        if(h[pos] > max)
        {
            max=h[pos];
        }
        
    }
    area=max*leng;

    printf("%d",area);


}