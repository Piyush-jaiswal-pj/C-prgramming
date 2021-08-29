//accept n number from user and show how many numbers are even and odds ? 
#include <stdio.h>
int main()
{
    int input, i, sum = 0, odd = 0;
    printf("Enter any number for which u want to know how many times odd and even number is come :");
    scanf("%d", &input);
    for (i = 1; i <= input; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + 1;
        }

        else
        {
            odd = odd + 1;
        }
    }
    printf("Even number comes %d times \n", sum);
    printf("odd numeber comes %d times \n", odd);
    return 0;
}