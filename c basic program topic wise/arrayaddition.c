#include <stdio.h>
int main()
{
    int a[3][3][3] =
        {
            {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}}, //elements of block 1
            {{11, 22, 33}, {44, 55, 66}, {77, 88, 99}}, //elements of block 2
            {{12, 23, 34}, {45, 56, 67}, {78, 89, 90}}  //elements of block 3
        };
    int b[3][3][3] =
        {
            {{110, 20, 30}, {40, 50, 60}, {70, 80, 90}}, //elements of block 1
            {{11, 22, 33}, {44, 55, 66}, {77, 88, 99}}, //elements of block 2
            {{12, 23, 34}, {45, 56, 67}, {78, 89, 90}}  //elements of block 3
        };
    int arr[3][3][3], arr1[3][3][3], i, input, sum[3][3][3], row, col;
    
    // printf("enter the total number of rows and clumn");
    // scanf("%d %d", &row, &col);
    // printf("enter the total number of rows and clumn");

    // for (i = 0; i < 3; ++i)
    // {
    //     for (int j = 0; j < 3; ++j)
    //     {
    //         for (int k = 0; k < 3; ++k)
    //         {
    //             scanf("%d", &arr[i][j][k]);
    //         }
    //     }
    // }
    // printf("enter element for second array ");
    // for (i = 0; i < 3; ++i)
    // {
    //     for (int j = 0; j < 3; ++j)
    //     {
    //         for (int k = 0; k < 3; ++k)
    //         {
    //             arr[3] += a[i][k] * b[k][j] ;
    //         }
    //     }
    // }
    for (i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                sum[i][j][k] = a[i][j][k] + b[i][j][k];
            }
        }
    }

    for (i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                printf("arr %d ", sum[i][j][k]);
                printf("\n");
            }
        }
    }
}