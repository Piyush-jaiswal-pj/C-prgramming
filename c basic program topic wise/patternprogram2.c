/*draw a pattern
*
***
****** 
********
*/
#include<stdio.h>
int main()
{
    int i,j,input;
    printf("Enter number to print pattern");
    scanf("%d",&input);
    for(i=1;i<=input;i)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
             
        }
       i=i+2;
        printf("\n");
    }
}