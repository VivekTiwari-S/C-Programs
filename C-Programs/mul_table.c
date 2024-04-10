#include<stdio.h>
int main()
{
    int num,i;
    printf("\nEnter the number : ");
    scanf("%d",&num);
    i=1;

    printf("\nUsing while loop !\n");
    printf("\nThe multiplication table of %d is :\n");

    while(i<=10)
    {
        printf("\n%d x %d = %d\n",num,i,(num*i));
        i++;
    }

    printf("\nUsing for loop !\n");
    printf("\nThe multiplication table of %d is :\n");

    for(i=1;i<=10;i++)
    {
        printf("\n%d x %d = %d\n",num,i,(num*i));
    }

    return 0;
}
