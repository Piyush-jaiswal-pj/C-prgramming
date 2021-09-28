#include<stdio.h>//descending order
int main()
{
    int arr[50],n,i,temp;
    printf("Enter how many numbers u want in a array");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
for(int step=0;step<n-1;++step){
    for(i=0;i<n-step-1;++i)
    {
        if(arr[i]<arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
    for(i=0;i<n;++i)
    {
        printf("%d",arr[i]);
    }
    return 0;

}