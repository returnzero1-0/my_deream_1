// Day of programmer is 13-sept.


#include<stdio.h>

void dayOfProgrammer(int year);

int main()
{
    int year;

    scanf("%d",&year);

    if(year >= 1700 && year <= 2700)
    {
        dayOfProgrammer(year);
    }
    


return 0;
}

void dayOfProgrammer(int year)
{
    if(year < 1918)          // julian Calender leap year is divisible by 4
    {
        if(year % 4 == 0)   // if not satisfy this condition then year is not Leap year.
        {
            printf("12.09.%d",year);

        }
        else
        {
            printf("13.09.%d",year);

        }

    }
    else if(year > 1918)        // in Gregorian cal leap year is either below 2 conditons
    {
        if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) // if not satisfy this condition then year is not Leap year.
        {
            printf("12.09.%d",year);

        }
        else
        {
            printf("13.09.%d",year);
        }
    }
    else      // in year is 1918 They shifted from 31-jan-1918 to 14-feb-1918
    {
        printf("26.09.%d",year);        //13 (non leap year day)+13=26

    }
}
