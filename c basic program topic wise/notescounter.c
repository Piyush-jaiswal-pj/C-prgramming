#include<stdio.h>

int main()
{
int amount,result;
int currencies[10]={1000,500,100,50,20,10,5,2,1};
printf("Enter the total amount ");
scanf("%d",&amount);

for (int i=0;i<=8;i++)
{
if(amount>=currencies[i])
{
    result=amount / currencies[i];
    amount=amount % currencies[i];
    printf(" currencies %d = %d \n",currencies[i],result);
}
else{}
}
return 0;

}