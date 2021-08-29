/*draw a pattern
1 2 3
4 5 6
7 8 9
*/
#include<stdio.h>
int main()
{
    int i,j,input;
    //,a,b,c;
    printf("Enter number to print pattern");
    scanf("%d",&input);
    for(i=0;i<input;i+=3)
    {
        for(j=1;j<=1;j++)
        {
           /* a=i+1;
            b=i+2;
            c=i+3;*/
            printf(" %d %d %d ",i+1,i+2,i+3);
             
        }
       
        printf("\n");
    }
}