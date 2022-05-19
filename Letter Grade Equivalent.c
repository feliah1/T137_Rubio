#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your grade: ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Invalid input");
    }
    else if(marks<50)
    {
        printf("Your grade is: Grade F");
    }
    else if(marks>=50 && marks<60)
    {
        printf("Your grade is: Grade D");
    }
    else if(marks>=60 && marks<67)
    {
        printf("Your grade is: Grade C");
    }
    else if(marks>=68 && marks<75)
    {
        printf("Your grade is: Grade B-");
    }
    else if(marks>=76 && marks<83)
    {
        printf("Your grade is: Grade B");
    }
    else if(marks>=84 && marks<91)
    {
        printf("Your grade is: Grade A-");
    }
    else if(marks>=92 && marks<100)
    {
        printf("Your grade is: Grade A");
    }
}
