#include<stdio.h>
#include<string.h>
struct student{
    int id1;
    int id2;
    char a;
    char b;
    float percentage;
};

int main()
{
    int  i;

    struct student record1={1,2,'A','B',90.5};
    printf("\n Sixe of structure in bytes : %d\n",sizeof(record1));
    printf("\n Address of id1 = %u",&record1.id1);
    printf("\n Address of id2 = %u",&record1.id2);
    
    printf("\n Address of a = %u",&record1.a);
    printf("\n Address of b = %u",&record1.b);
    printf("\n Address of percentage  = %u",&record1.percentage);

return 0;
}
