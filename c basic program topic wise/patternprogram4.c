/*draw a pattern
1
12
123
1234
*/
#include<stdio.h>
int main()
{
    int i,j,input;
    //,a,b,c;
    printf("Enter number to print pattern");
    scanf("%d",&input);
    for(i=0;i<input;i++)
    {
        for(j=1;j<=i;j++)
        {
           
            printf("%d",j);
             
        }
       
        printf("\n");
    }
}