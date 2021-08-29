<<<<<<< HEAD
#include <stdio.h>
int main()
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
=======
#include <stdio.h>
int main()
{
    int input, a, sum = 0, value;
    printf("Enter any number");// A Palindrome no. is the number that remains the same when its digits get reversed.
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
>>>>>>> 5c877f6 (all pgrams)
    }