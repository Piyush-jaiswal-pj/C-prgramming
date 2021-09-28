#include <stdio.h>
#include <conio.h>
void doublevar(int *a);
int main()
{
    int x;
    printf("Enter any number for its doouble \n");
    scanf("%d", &x);
    doublevar(&x);
}
void doublevar(int *x)
{
    *x = *x + *x;
    printf("Given number of its doouble is : %d", *x);
    getch();
}