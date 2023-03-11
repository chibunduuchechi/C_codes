#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int score;

    printf("Enter your score to know your grade: ");
    scanf("%d", &score);

    if (score <= 39)
    {
        printf("Your grade is F \n");
    }
    else if (score <= 49 && score > 39)
    {
        printf("Your grade is D \n");
    }
    else if ((score <= 59) && (score > 49))
    {
        printf("Your grade is C \n");
    }
    else if ((score <= 69) && (score > 59))
    {
        printf("Your grade is B \n");
    }
    else if (score <=100 && score> 69)
    {
        printf("Your grade is A \n");
        if (score >= 95)
        {
            printf("Distinction! \n");
            if (score == 95)
            {
                printf("you've been awarded $500 ");
            }
            else if (score == 96)
            {
                printf("you've been awarded $600 ");
            }
            else if (score == 97)
            {
                printf("you've been awarded $700 ");
            }
            else if (score == 98)
            {
                printf("you've been awarded $800 ");
            }
            else if (score == 99)
            {
                printf("you've been awarded $900 ");
            }
            else
            {
                printf("you've been awarded $1200 ");
            }
        }
        else
        {
            printf("Excellent \n");
        }
    }
    else
    {
        printf("Enter a score between 0 and 100 ");
    }
    return (0);
}

