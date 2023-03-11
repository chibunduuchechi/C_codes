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
        printf("Your grade is F");
    }
    else if (score <= 49 && score > 39)
    {
        printf("Your grade is D");
    }
    else if ((score <= 59) && (score > 49))
    {
        printf("Your grade is C");
    }
    else if ((score <= 69) && (score > 59))
    {
        printf("Your grade is B");
    }
    else if (score <=100 && score> 69)
    {
        printf("Your grade is A");
    }
    else
    {
        printf("Enter a score between 0 and 100");
    }
    return (0);
}
