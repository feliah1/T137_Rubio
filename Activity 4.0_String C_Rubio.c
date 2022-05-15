#include<stdio.h>
#include<ctype.h>
#include<string.h>

void main(){

   int i = 0, count = 0, consonants = 0;
   char string[100];

   printf("Input name: ");
   gets(string);

   for(i=0;string[i]!='\0';i++){
    {
        if((string[i]>=65 && string[i]<=90)|| (string[i]>=97 && string[i]<=122))
    {
      if(string[i]=='a'||string[i]=='A'||string[i]=='e'||string[i]=='E'||string[i]=='i'||string[i]=='I'||string[i]=='o'||string[i]=='O'||string[i]=='u'||string[i]=='U'){
         string[i]=toupper(string[i]);
         count++;
         i++;}

      else
        consonants++;

      }
   }
  }
   printf("String Converted: ");
   puts(string);

   printf("String Length: %d", strlen(string));
   printf("\nVowels: %d", count);
   printf("\nConsonants: %d", consonants);



   return 0;
}
