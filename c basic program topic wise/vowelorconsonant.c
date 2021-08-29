#include<stdio.h>
int main()
{
    char input;
    printf("Enter any character you want to check vowel or consonant");
    scanf("%c",&input);

 if(input=='a'||input=='e'||input=='i'||input=='o'||input=='u'||input=='A'||input=='E'||input=='I'|input=='O'||input=='U')
    {
        printf("The entered character is vowel");
    }else 
    {
        printf("The entered character is consonant");
    }
    
} 