<<<<<<< HEAD
#include <stdio.h>
int main()
{
    int input, x, sum = 0, y = 0, z;
    printf("Enter any number for reversing it \n");
    scanf("%d", &input);
    printf("The reverse of the given number is = ");
    z = input % 10;
    printf("%d", z);
    y = input / 10;
    y = y % 10;
    printf("%d", y);
    x = input / 100;
    printf("%d", x);
    sum = x + z + y;
    printf("\nThe sum of the given number is = %d \n", sum);
    return 0;
=======
#include <stdio.h>
int main()
{
    int input, x, sum = 0, y = 0, z;
    printf("Enter any number for reversing it \n");
    scanf("%d", &input);
    printf("The reverse of the given number is = ");
    z = input % 10;
    printf("%d", z);
    y = input / 10;
    y = y % 10;
    printf("%d", y);
    x = input / 100;
    printf("%d", x);
    sum = x + z + y;
    printf("\nThe sum of the given number is = %d \n", sum);
    return 0;
>>>>>>> 5c877f6 (all pgrams)
}