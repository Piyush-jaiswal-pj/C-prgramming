#include <stdio.h>
#include <string.h>
int main()
{
    char str[10], str1[10],str2[10];
    printf("Enter First string\n");
    gets(str);
    printf("Enter second string \n");
    gets(str1);
   strcat(str,str1);
   //strcpy(str,str2);
    printf("Merge string is %s", str);
}