#include <stdio.h>
int sum(int *a, int *b, int *c);
int main()
{
    int num1, num2, c;
    printf("Enter two number for its sum \n");
    scanf("%d %d", &num1, &num2);
    sum(&num1, &num2, &c);
}
int sum(int *a, int *b, int *c)
{
    *c = *a + *b;
    printf("sum of two number is %d", *c);
    return 0;
}