<<<<<<< HEAD
#include <stdio.h>
int main()
{
    int i,sum=0,input;
    scanf("%d",&input);
    for(i=0;i<=input;i++)
    {
        
        printf("%d",sum);
    }
    
    return 0;
=======
#include <stdio.h>
#include <conio.h>
void main()
{
    int input, i, c, a = 0, b = 1;
    printf("Enter any number for fibbonicci series \n");
    scanf("%d", &input);
    printf(" %d %d ", a, b);
    for (i = 2; i < input; i++)
    {
        c = a + b;
        printf(" %d ", c);
        a = b;
        b = c;
    }
    getch();
>>>>>>> 5c877f6 (all pgrams)
}