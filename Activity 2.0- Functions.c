#include <stdio.h>
int main()
{

int number1, number2, number3, number4, number5, sum;
float avg = 0;

printf("Enter 5 integers: ");
scanf("%d", &number1);
scanf("%d", &number2);
scanf("%d", &number3);
scanf("%d", &number4);
scanf("%d", &number5);

sum = number1 + number2 + number3 + number4 + number5;
avg = sum/ (float) 5;

printf("%0.2f",avg);
return 0;
}
