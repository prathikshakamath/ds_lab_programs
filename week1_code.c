#include <stdio.h>
struct student{
   int id;
   int age;
   int mark;
};
int main()
{
    int n,i;
    struct student s[50];
    printf("Enter number of students\n");
    scanf("%d",&n);

    for(i = 0;i < n; i++)
    {
        printf("Student %d:\n",i+1);
        printf("Enter id:");
        scanf("%d",&s[i].id);
        printf("Enter age:");
        scanf("%d",&s[i].age);
        printf("Enter marks:");
        scanf("%d",&s[i].mark);

    }

    printf("\nADMISSION RESULTS\n");
    for (i = 0;i < n; i++)
    {
        printf("Student %d:",i+1);

        if (s[i].age <= 20 )
          {
              printf("Age is invalid\n");
              continue;
          }
        if (s[i].mark < 0 || s[i].mark >100)
          {
              printf("Mark is invalid\n");
              continue;
          }
        if (s[i].mark >= 65 )
        {
            printf("Qualified\n");
        }
        else
        {
            printf("Not qualified\n");
        }


    }
}
