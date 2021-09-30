#include<stdio.h>
#include<string.h>
int main()
{
    char input[50];
    printf("Enter the string to find its length :--\n");
    gets(input);
   // int x=strlen(input);
    printf("The length of a entered string is :- %d",strlen(input));
}