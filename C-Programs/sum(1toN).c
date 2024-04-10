#include<stdio.h>
int main()
{
    int num,sum;
    printf("\nEnter the number upto which  you want the sum : ");
    scanf("%d",&num);
    // sum = num*(num + 1)/2;
    // printf("\nThe sum upto %d is : %d",num,sum);
    sum = 0;
    for(int i = 0;i <= num;i++)
    {
        sum += i;
    }
    printf("\nThe sum upto %d is : %d\n",num,sum);
    return 0;
}
