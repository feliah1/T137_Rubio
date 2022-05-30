//F

#include <stdio.h>

int main() {
    char name[50];
    int marks,i,n;
    float marks1, marks2, marks3, average, total;

    printf("Enter number of students: ");
    scanf("%d",&n);
    FILE *fptr;
    fptr=(fopen("C:\student.txt","w"));
    if(fptr==NULL) {
        printf("Error!");
        exit(1);
    }
    for (i=0;i<n;++i) {
        printf("For student%d\nEnter name: ",i+1);
        scanf("%s",name);
        printf("Enter ID#: ");
        scanf("%d",&marks);
        fprintf(fptr,"\nName: %s \nID#: %d \n",name,marks);

    printf("Enter Science Grade :");
    scanf("%f", &marks1);
    printf("Enter Math Grade :");
    scanf("%f", &marks2);
    printf("Enter English Grade :");
    scanf("%f", &marks3);
        fprintf(fptr,"\nScience Grade= %f \nMath Grade= %f \nEnglish Grade= %f \n",marks1,marks2,marks3);

    total = (marks1 + marks2 + marks3);
    printf("Total : %0.2f\n", total);
    average = (marks1 + marks2 + marks3) / 3;
    printf("Average : %0.2f\n", average);
        fprintf(fptr,"\nTotal Grade= %0.2f \nAverage= %0.2f \n",total,average);
    }
    fclose(fptr);
    return 0;
}
