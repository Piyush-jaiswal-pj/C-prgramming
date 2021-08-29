#include<stdio.h>
int main ()
{
    int input,i,table=1;
    printf("Enter number for their table");
    scanf("%d",&input);
for(i=1;i<=10;i++)
{   
table=input*i;
printf("%d * %d = %d \n",i,input,table);
}
}