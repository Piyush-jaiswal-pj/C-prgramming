#include<stdio.h>
int main(){
    int arr[10],i,sum=0,avg,n;
printf("Enter how many number u want in aray");
scanf("%d",&n);
    printf("Enter number for array");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
sum=sum+arr[i];
}
avg=sum/n;
printf("The sum of entered array is %d and average of an array is %d",sum,avg);
}