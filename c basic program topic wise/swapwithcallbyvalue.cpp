#include <stdio.h>
int swap(int a, int b);
int main()
{
    int input1, input2;
    printf("Enter the value of a and b for swaping");
    scanf("%d %d", &input1, &input2);

    swap(input1, input2);
}
int swap(int input1, int input2)
{
    int a = input1; //5
    int b = input2; //4
    a = b + a;      //5+4=9
    b = a - b;      //9-4=5
    a = a - b;      //9-5=4
    printf("The swap value of a = %d & b = %d", a, b);
}
