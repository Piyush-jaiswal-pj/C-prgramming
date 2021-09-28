#include <stdio.h>
int main()
{
    int arr[10], i, input, pos, swap;
    printf("enter array number");
    scanf("%d", &input);
     printf("Enter array \n");
    for (i = 0; i < input; ++i)
    {
        scanf("%d", &arr[i]);
    }

    for (pos = 0; pos < input - 1; ++pos)
    {
        for (i = 0; i < input - pos - 1; ++i)
        {
            if (arr[i] > arr[i + 1])
            {
                swap = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = swap;
            }
        }
    }
    printf("The sorted array is\n");
    for (i = 0; i < input; ++i)
    {
        printf("%d", arr[i]);
        printf("\n");
    }
    printf("Second Highest digit of array is%d", arr[input-2]);
    return 0;
}