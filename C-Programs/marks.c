#include <stdio.h>
void main()
{
    int x, y;
    printf("\nEnter the number of questions you marked correct :\n");
    scanf("%d", &x);
    printf("\nEnter the number of question you marked wrong :\n");
    scanf("%d", &y);
    printf("\nYour positive score is %d\n", x * 4);
    printf("\nYour negative score is %d\n", y * 1);
    printf("\nYour final score is %d\n\n", (x * 4 - y * 1));
}