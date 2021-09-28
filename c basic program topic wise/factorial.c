#include <stdio.h>
int main()
{
    int input,fac=1,i;
    printf("Enter any number for their factorial\n");
    scanf("%d",&input);
    for(i=1;i<=input;i++)
    {
        fac=fac*i;
    }
printf("The factorial of %d is = %d",input,fac);
return 0;
    }