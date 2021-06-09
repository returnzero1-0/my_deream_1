// Hacker Rank DS Array Q.14

#include<stdio.h>

void gradingStudents(int grades[]);

int n;

int main()
{
    scanf("%d",&n);
    int grades[n];

    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&grades[i]);
    }

    gradingStudents(grades);

return 0;
}

void gradingStudents(int grades[])
{
    int i;
    int modGrade,neg,round;

    for(i=0;i<n;i++)
    {
        if(grades[i]<=100)
        {
            if(grades[i]<=37)
            {
                grades[i]=grades[i];

            }
            else
            {
                modGrade=grades[i]%5;

             // printf("mod =%d ",modGrade);

                neg=grades[i]-modGrade + 5;

             // printf("neg =%d ",neg);

          
                if(neg - grades[i] < 3)
                {
                     grades[i]=neg;
            
                 }
            
            }
             printf("%d\n",grades[i]);
      
        }
    }
}