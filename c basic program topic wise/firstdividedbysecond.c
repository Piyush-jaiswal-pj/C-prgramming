#include<stdio.h>
int main()
{
    int input1,input2;
    printf("Enter first number");
    scanf("%d",&input1);
    printf("Enter second number");
    scanf("%d",&input2);
    if (input1%input2==0)
    {
        printf("first number is divisible by  second number");
    }
    else{
        printf("first number is not divisible by  second number");
    }
}