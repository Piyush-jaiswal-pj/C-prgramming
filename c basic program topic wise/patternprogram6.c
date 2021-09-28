/*draw a pattern
A
AB
ABC
ABCD
ABCDE
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
           
            printf("%c",(char)(j+64));
            //print("%c",'A' + j-1);
             
        }
       
        printf("\n");
    }
}