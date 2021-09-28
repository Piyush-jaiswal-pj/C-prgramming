#include <stdio.h>
int fab(int input);
int main()
{
    int input;
     printf("Enter  Any number for fibonacci series \n");
    scanf("%d", &input);
    fab(input);
    return 0;
}
int fab(int input)
{
    int a = 0, b = 1, c;
    printf("fibonacci series is %d  %d ", a, b);
    for (int i = 1; i<= input; ++i)
    {
        c = a + b;
        a = b;
        b = c;
        printf(" %d ", c);
    }

}