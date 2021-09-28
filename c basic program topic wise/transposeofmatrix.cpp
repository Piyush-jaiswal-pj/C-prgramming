#include <stdio.h>
int main()

{
    int arr[10][10], row, col, transpose[10][10];
    printf("enter number of rows");
    scanf("%d", &row);
    printf("enter number of col");
    scanf("%d", &col);
printf("Enter matrix");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            scanf("%d", &arr[i] [j]);
        }
    }

    for (int i = 0; i < row; ++i)
    {

        for (int j = 0; j < col; ++j)
        {

            transpose[j][i] = arr[i][j];
        }
    }
printf("Transpose of matrix is\n");
    for (int i = 0; i < col; i++)
    {

        for (int j = 0; j < row; j++)
        {
            printf("%d\t", transpose[i][j]);
          
        }  printf("\n");
    }
    return 0;
}