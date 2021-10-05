#include <stdio.h>
#include <string.h>
int main()
{
    char input[10];
    printf("Enter Any String \n");
    gets(input);
    int vowel=0, consonant=0, number=0, space=0, i, x;
    x = strlen(input);
    for (i = 0; i < x; ++i)
    {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U')
        {
            vowel++;
        }
        else if(input[i]>='a'&&input[i]<='z'||input[i]>='A'&&input[i]<='Z')
        {
            consonant++;
        }
        else if (input[i] >= '0' && input[i] <= '9')
        {
            number++;
        }
        else if (input[i] == ' ')
        {
            space++;
        }
    }
        printf("Total Vowels = %d \n", vowel);
        printf("Total Consonants = %d \n",consonant);
        printf("Total Digit = %d \n", number);
        printf("Total Space = %d \n", space);
    
    }
