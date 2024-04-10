// to print the star pattern
/*
#include <stdio.h>
void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows;
    printf("\nHow many rows do you want ?\n");
    scanf("%d", &rows);
    starpattern(rows);
    return 0;
}
*/

// to change the value of any variable by call by reference
/*
#include <stdio.h>
void changevalue(int *address)
{
    *address = 345;
}

int main()
{
    int a = 34, b = 56;
    printf("The value of a now is %d\n", a);
    changevalue(&a);
    printf("The value of a now is %d\n ", a);
    return 0;
}
*/

// to read the entries in the array
/*
#include <stdio.h>
int func1(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n", i, arr[i]);
    }
    return 0;
}
int main()
{
    int arr[] = {23, 14, 3, 4};
    printf("The value at index 0 is %d\n", arr[0]);
    func1(arr);
    printf("The value at index 0 is %d\n", arr[0]);
    return 0;
}
*/

// to print a string
/*
#include <stdio.h>
void prstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}

int main()
{
    char str[] = {'v', 'i', 'v', 'e', 'k', '\0'};
    prstr(str);
    return 0;
}
*/

// to find the year is leap or not 😎😎😎😎😎😎😎
/*
#include <stdio.h>
void main()
{
    int year;
    printf("\nEnter the year you want to check :");
    scanf("\n%d", &year);

    if (year % 4 == 0 && year % 16 != 0)
    {
        printf("\nThe year is a leap year\n");
    }

    else
    {
        printf("\nThe year is not a leap year\n");
    }
}
*/

// if you want to select all the highlighted words you can simply press ctrl+d

// scalar multiplication program of matrix
/*
#include <stdio.h>
void main()
{
    int x, y, z;
    printf("Enter the number of rows:\n");
    scanf("%d", &x);

    printf("Enter the number of columns:\n");
    scanf("%d", &y);

    int a[x][y], b[x][y], c[x][y], i, j;

    printf("Enter first matrix:\n");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the scalar you want to multiply your matrix with :\n");
    scanf("%d", &z);

    printf("\nThe first matrix after multiplication is:\n");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("%d\t", z * a[i][j]);
        }
        printf("\n");
    }
}
*/