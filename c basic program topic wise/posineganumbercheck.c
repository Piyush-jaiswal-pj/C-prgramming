#include <stdio.h>
int main()
{
    int input;
    printf("Enter any to check '+' or '-' ");
    scanf("%d",&input);
    if(input<0)
    {
        printf("The Entered number is negative");
    }
    else{
        printf("The Entered number is positive");
    }
    return 0;
}