#include <stdio.h> //searching and replacing
int main()
{
    int arr[50], n, i, temp, replace;
    printf("Enter how many numbers u want in a array : ");
    scanf("%d", &n);
    printf("Enter the array : ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number u want search : ");
    scanf("%d", &temp);
    printf("enter the number u want to replace with search number : ");
    scanf("%d", &replace);
    for (i = 0; i < n; ++i)
    {
        if (temp == arr[i])
        {
            printf("The number  %d is found at pos %d \n", arr[i], i + 1);
            arr[i] = replace;
            break;
        }
    }
    printf("Updated list is : \n");
    for (i = 0; i < n; ++i)
    {
        printf(" %d \n", arr[i]);
    }

    return 0;
}