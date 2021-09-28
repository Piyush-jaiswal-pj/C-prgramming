#include <stdio.h>
int main()
{
    int input, x, sum = 0;
    printf("Enter any number for reversing it \n");
    scanf("%d", &input);
    printf("The reverse of the given number is = ");
    while (input != 0)
    {
        x = input % 10;
        printf("%d", x);
        sum += x;
        input = input / 10;
    }
    printf("\nThe sum of the given number is = %d \n", sum);
    return 0;
}