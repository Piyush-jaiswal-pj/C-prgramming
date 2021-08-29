#include <stdio.h>
//calculate sum of series (1/1!+1/2!+1/3!+1/4!+......)
int main()
{
double i,input;
    double sum=0.0;
    scanf("%lf",&input);
    for(i=1;i<=input;i++)
    {
        sum = sum + 1/i;

    }
    printf("%lf",sum);

    return 0;
}