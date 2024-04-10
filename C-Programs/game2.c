#include <stdio.h>
int main()
{
    int ch1;
    printf("\nWelcome in the world of gaming\n");
    printf("\nI am Vivek Tiwari\n-Your friend who brings you all the games like this...\n");

    printf("\nDo you watch any of this above mentioned shows ?\n");
    printf("\n1.Shark Tank India\n2. Pandya Store\n3. Anupama\n4.Sasural Simar ka 2\n");
    printf("\nType 1 for yes and 0 for no\n");
    scanf("%d", &ch1);
    if (ch1 == 1)
    {
        printf("\nCool ! go ahead\n");
    }
    else
    {
        goto end;
    }

end:
    return 0;
}