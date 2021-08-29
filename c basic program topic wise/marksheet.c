<<<<<<< HEAD
#include <stdio.h>
#include <math.h>
int main()
{
    int maths, science, english, computer, hindi, totalmarks;
    float percentage;
    printf("Enter the marks of the given subject:\n");
    printf("Maths");
    scanf("%d", &maths);
    printf("Hindi");
    scanf("%d", &hindi);
    printf("Computer");
    scanf("%d", &computer);
    printf("English");
    scanf("%d", &english);
    printf("Science");
    scanf("%d", &science);

    totalmarks = maths + science + english + computer + hindi;
    if (totalmarks <= 500 & totalmarks>175)
    {
        percentage = (float)totalmarks / 500 * 100; //we need to type caste here  so we used float
        printf("Total marks obtained out of 500 marks =%d", totalmarks);
        printf("Percentage obtained = %.2f%%", percentage);
        printf("Pass")
    }
    else
    {
        printf("Enter marks under 500 or student is fail");
    }
}
return 0;
}
=======
#include <stdio.h>
#include <math.h>
int main()
{
    int maths, science, english, computer, hindi, totalmarks;
    float percentage;
    printf("Enter the marks of the given subject:\n");
    printf("Maths");
    scanf("%d", &maths);
    printf("Hindi");
    scanf("%d", &hindi);
    printf("Computer");
    scanf("%d", &computer);
    printf("English");
    scanf("%d", &english);
    printf("Science");
    scanf("%d", &science);

    totalmarks = maths + science + english + computer + hindi;
    if (totalmarks <= 500 & totalmarks>175)
    {
        percentage = (float)totalmarks / 500 * 100; //we need to type caste here  so we used float
        printf("Total marks obtained out of 500 marks =%d", totalmarks);
        printf("Percentage obtained = %.2f%%", percentage);
        printf("Pass")
    }
    else
    {
        printf("Enter marks under 500 or student is fail");
    }
}
return 0;
}
>>>>>>> 5c877f6 (all pgrams)
