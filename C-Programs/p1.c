#include <stdio.h>
void main()
{
    int a, b, i;

    printf("\nEnter the value of a :\n");
    scanf("%d", &a);

    printf("\nEnter the value of b :\n");
    scanf("%d", &b);

    printf("\nThe square of the number you first entered is %d\n", (a * a));

    printf("\nThe square of the number you entered second is %d\n", (b * b));

    printf("\nThe table of first number is : \n");

    for (i = 1; i < 11; i++)
    {
        printf("\n%d x %d = %d\n", a, i, (a * i));
    }

    printf("\nThe table of second number is : \n");

    for (i = 1; i < 11; i++)
    {
        printf("\n%d x %d = %d\n", b, i, (b * i));
    }
}
