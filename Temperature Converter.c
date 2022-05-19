#include <stdio.h>

int main()
{
    float fh,cl,kv;
    char ch;
    printf("\n\n [c] Fahrenheit to Celsius");
    printf("\n\n [f] Celsius to Fahrenheit");
    printf("\n\n [k] Kelvin to Celsius");
    printf("\n\n Enter your choice (c, f, k): ");
    scanf("%c",&ch);
    if((ch =='c') ||(ch =='C'))
    {
        printf("\n\nEnter temperature in Fahrenheit: ");
        scanf("%f",&fh);
        cl= (fh - 32) * 5/9;
        printf("\n\nTemperature in Celsius: %.2f\n\n",cl);
    }
    else if((ch =='f') ||(ch =='F'))
    {
        printf("\n\nEnter temperature in Celsius: ");
        scanf("%f",&cl);
        fh= (cl*9/5)+32;
        printf("\n\nTemperature in Fahrenheit: %.2f\n\n",fh);
    }
    else if((ch =='k') ||(ch =='K'))
    {
        printf("\n\nEnter temperature in Kelvin: ");
        scanf("%f",&kv);
        cl= (kv - 273.15);
        printf("\n\nTemperature in Celsius: %.2f\n\n",cl);
    }
    else
    {
        printf("\n\nInvalid Input \n\n");
    }
    return 0;
}
