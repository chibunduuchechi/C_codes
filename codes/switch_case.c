#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* Main - main entry
* Description: Using switch case instead of if statements
* Return: (0)
* Note: 0 to 40 is F
*       41 to 49 is D
*       50 to 59 is C
*       60 to 69 is B
*       70 to 100 is A
*/

int main(void)
{
    int score;

    printf("Enter your score to know your grade: ");
    scanf("%d", &score);

    switch (score)
    {
    case 0 ... 40:
        printf("Your grade is F \n");
        break;
    case 41 ... 49:
        printf("Your grade is D \n");
        break;
    case 50 ... 59:
        printf("Your grade is C \n");
        break;
    case 60 ... 69:
        printf("Your grade is B \n");
        break;
    case 70 ... 100:
        printf("Your grade is A \n");
        break;
    default:
        printf("enter a score from 0 to 100");
        break;
    }
    return (0);
}
