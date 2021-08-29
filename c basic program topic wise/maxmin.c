#include<stdio.h>
int main()
{
    int input,i,sum=0;
    printf("Enter any natural number ");
    scanf("%d",&input);
    for(i=1;i<=input;i++)
    {
        sum +=(i*i);
     }
     printf("The sum of square of natural is = %d",sum);
}