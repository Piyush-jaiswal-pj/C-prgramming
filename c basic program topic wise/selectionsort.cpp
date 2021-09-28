#include <stdio.h> //searching and replacing
int main()
{
    int arr[50], n, i, temp,swap;
    printf("Enter how many numbers u want in a array : ");
    scanf("%d", &n);
    printf("Enter the array : ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<(n-1);i++)
    {
        temp=i;
        for(int j=i+1;j<n;++j)
        {
            if(arr[temp]>arr[j])
            {
                temp=j;
            }
        }
        if(temp !=i)
        {
            swap=arr[i];
            arr[i]=arr[temp];
            arr[temp]=swap;
        }
    }
    printf("Sorted List is : ");
    for(i=0;i<n;++i)
    {
        printf("%d \n",arr[i]);
    }
    return 0;
}