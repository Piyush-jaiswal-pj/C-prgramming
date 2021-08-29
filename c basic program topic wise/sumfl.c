#include<stdio.h>
//#include<string.h>
int main()
{
int input,lastdigit,firstdigit,sum=0;
scanf("%ld",&input);
lastdigit=input%10;
while (input>=10)
{
  input=input/10;
  
}
firstdigit=input;
sum=firstdigit+lastdigit;

printf("%d",sum);
}










/*int main()
{
    char input[7];
  
  printf("Enter any for number");
  gets(input);
  int s,r;
  s=strlen(input);
   r=input[s-0]+input[s-s-1]; //input 5 00001
    printf("%d",r);
    return 0;
    }*/


    