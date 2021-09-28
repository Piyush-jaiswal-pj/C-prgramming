#include<stdio.h>
int swap(int *a,int *b);
int main()
{
    int input1,input2;
    printf("Enter value for swaping a,b \n");
    scanf("%d %d",&input1,&input2);
    swap(&input1,&input2);
}
int swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("after swaping \n a = %d \n b = %d",*a,*b);
}