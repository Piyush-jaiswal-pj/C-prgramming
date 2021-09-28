#include <stdio.h>
int main()
{
    int var = 30;  //variable
    int *store;    //declaration of pointer
    int **pointer; //declaration of pointer to pointer
    store = &var;  //store the var address in pointer store
    pointer = &store;
    printf("%d ", *store);
    printf("\n");
    printf("%d ", &store); //result//  ( &=adress)
    printf("\n");
    printf("%d ", **pointer);
}