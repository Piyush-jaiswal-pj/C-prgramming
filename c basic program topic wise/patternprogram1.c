/*draw a pattern
*
**
***
****
****** */
#include<stdio.h>
int main()
{
    int i,j,input;
    printf("Enter number to print pattern");
    scanf("%d",&input);
    for(i=0;i<input;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("* ");
             
        }
        printf("\n");
    }
}