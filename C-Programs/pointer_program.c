#include <stdio.h>
int main()
{
    int a, b;

    // int choice;

    printf("\nEnter the value of a:\n"); // taking user input
    scanf("%d", &a);

    printf("\nEnter the value of b:\n"); // taking user input
    scanf("%d", &b);

    int *A = &a; // pointer to a

    int *B = &b; // pointer to b

    printf("\nThe address of a is %x\n", A); // printing address of a

    printf("\nThe address of b is %x\n", B); // printing address of b

    printf("\nThe value of a is %d\n", *A); // storing value of a

    printf("\nThe value of b is %d\n", *B); // storing value of b

    return 0;
}