#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c;
    char str[100];

        //input sa word
    printf("Input any string:");
    gets(str);
    a=strlen(str);
        //result sa word
    printf("Reverse ordered words:\n");
    b=a;

        //body sa code
    for(;a>=0;a--)
        {if(str[a]==' ')
        {for(c=a+1;c<=b;c++)
        //ang 3rd or last part sa word
    {printf("%c",str[c]);}
        //spacing
    printf(" ");
        //first to last part sa word
    b=a-1;
        }
        else if(a==0)
        {printf("%c",str[a]);
        }
}
return 0;
}
