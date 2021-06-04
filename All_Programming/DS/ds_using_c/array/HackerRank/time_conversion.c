// Hacker Rank DS Array Q.13

// 12:01:00AM -> 00:01:00
// 12:01:00PM -> 12:01:00

// 03:10:02PM -> 15:10:02


#include<stdio.h>
#include<string.h>

void timeConversion(char time[]);
int main()
{

    char s[10];

    int i;
    for(i=0;i<10;i++)
    scanf("%c",&s[i]);


    timeConversion(s);

return 0;
}

void timeConversion(char s[])
{
    if(s[8]=='A' && s[9]=='M')
    {
        if(s[0]=='1' && s[1]=='2')
        {
            s[0]='0';
            s[1]='0';
        }
    }
    else
    {
        if(s[0]=='0' || s[1]!='2')
        {
            s[0]+=1;
            s[1]+=2;
        }
    }
    
    int i;
    for(i=0;i<8;i++)
    printf("%c",s[i]);
}