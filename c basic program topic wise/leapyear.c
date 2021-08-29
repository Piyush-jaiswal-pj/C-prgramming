#include <stdio.h>
int main()
{
    int input;
    printf("Enter the year which u want check as leap year or not \n");
    scanf("%d", &input);
    if (((input % 4 == 0) && (input % 100 != 0)) || (input % 400 == 0))
    {
        printf("the year is leap  year");
    }
    else
    {
        printf("the year is Not a leap  year");
    }
    return 0;
}