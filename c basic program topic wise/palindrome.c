#include <stdio.h>
int main()// ex 151 = on their sum the return should be 151
{
    int input, a, sum = 0, value;
    printf("Enter any number");
    scanf("%d", &input);
    value = input;
    while (input != 0)
    {
        a = input % 10;
        sum = (sum * 10) + a;
        input = input / 10;
        }

        if (sum==value)
        {
            printf("The entered number is palindrome");
        }
        else{
            printf("The entered number is not palindrome");
        }
        return 0;
    }