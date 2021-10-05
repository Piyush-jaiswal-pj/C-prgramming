#include<stdio.h>
#include<string.h>

//By normal method

/*int main()
{
 char input[10];
 printf("Enter Any Lower Case String");
 gets(input);
 printf("The Upper Case String is : \n");
 puts(strupr(input));
 return 0;
}*/

//By function
int uppercase(char input[]);
int main()
{
 char input[10];
 printf("Enter Any Lower Case String \n");
 gets(input);
 uppercase(input);
 
 return 0;
}
int uppercase(char input[])
{
printf("The Upper Case String is : \n");
puts(strupr(input));
}