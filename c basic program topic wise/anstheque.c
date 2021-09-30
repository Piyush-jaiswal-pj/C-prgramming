#include<stdio.h>
#include<string.h>
int main()
{
    char input[10];
    printf("Who is the inventor of C ?\n");
    printf("Enter the Ans :-- \n");
    gets(input);
    if(input == 'Dennis Ritchie')
    {
        printf("Good Right Answer");
    }
    else{
        printf("Try Again");
    }
}
