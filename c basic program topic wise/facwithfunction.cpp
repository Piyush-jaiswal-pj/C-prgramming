#include <stdio.h>
int factorial(int);//function declaration also called function prototypye
int main()
{
    int input, arg = 0;
    printf("Enter any number for factorial");
    scanf("%d", &input);
    arg = factorial(input);//function calling
    printf("factorial of %d = %d", input, arg);
}

int factorial(int input)//function defination
{

    int arg = 1;
    for (int i = 1; i <= input; ++i)
    {
        arg = arg * i;
    }
    return arg;
}