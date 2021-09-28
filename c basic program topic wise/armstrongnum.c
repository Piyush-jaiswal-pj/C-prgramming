#include <stdio.h>
int main()
{
    int input,result,sum=0,temp;
    printf("The any no. which you want to check as armstrong or not : ");
    scanf("%d",&input);
    temp=input;
  while(input>0)
    {
     result=input%10;
     sum=sum+(result*result*result);
     input=input/10;  
    }
    if(temp==sum)
    {
        printf("The given number is a armstrong number");
    }
    else
    {
         printf("The given number is not a armstrong number");
    }  
  

  /*while(input>0)
    {
     result=input%10;
     for(int i=1;i<=result;i++)
     {
    store=store*result;
     }
     sum=sum+store;
     input=input/10;  
    }
    if(sum==input)
    {
        printf("The given number is a armstrong number");
    }
    else
    {
         printf("The given number is not a armstrong number");
    }*/
}