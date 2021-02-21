#include <stdio.h>
#include <stdlib.h>

void avg (int);

int main()
{
    int totalgrade;
    int grade1 , grade2 , grade3 , grade4 , grade5;

    printf("Welcome!\n");
    printf("\nPlease enter the 1st grade: ");
    scanf("%d", &grade1);

    printf("\nPlease enter the 2nd grade: ");
    scanf("%d", &grade2);

    printf("\nPlease enter the 3rd grade: ");
    scanf("%d", &grade3);

    printf("\nPlease enter the 4th grade: ");
    scanf("%d", &grade4);

    printf("\nPlease enter the 5th grade: ");
    scanf("%d", &grade5);

    totalgrade = grade1 + grade2 + grade3 + grade4 + grade5;

    printf("\nThe total sum of all grades is %d\n", totalgrade);

    avg(totalgrade);

    return 0;
}

void avg(int sumgrade)
{
    int avggrade;

    avggrade = sumgrade / 5;

    printf("\n\nThe average of all grades is %d\n\n\n", avggrade);
}
