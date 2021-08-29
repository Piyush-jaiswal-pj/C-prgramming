//find fact of any number
//factore is a number that divides aother number evenly that is with no remainder
#include<stdio.h>
int main()
{
    int input,i;
    printf("Enter any number to find its factor ");
    scanf("%d",&input);
    printf("its factor is = ");
    for(i=1;i<=input;i++)
    {
        if(input % i==0)
        {
            printf(" %d ",i);
        }
}
}
