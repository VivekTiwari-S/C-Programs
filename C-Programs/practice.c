/*
// program 1 :
#include<stdio.h>

int main()//return type function without argument
{
    int a, b, choice;//two numbers for the process and one variable for the choice selection
    printf("Enter first number:");
    scanf("%d",&a);

    printf("Enter the second number:");
    scanf("%d",&b);

    printf("Enter your choice:\n");

    printf("\n1. addition\n2. subtraction\n3. multiplication\n4. division\n ");
    scanf("%d",&choice);

    switch(choice)//switch control statement used for easy choice selection
    {
        case 1 : printf("%d + %d = %d\n", a , b , (a+b));
                     break;//break is used to avoid further switching of choice
        case 2 : printf("%d - %d = %d\n", a , b , (a-b));
                     break;

        case 3 : printf("%d  x %d = %d\n", a , b , (a*b));
                     break;

        case 4 : if(b !=0)// != means not equal to
        {
             printf("%d / %d = %d\n", a , b , (a/b));
        }
                  else{
                        printf("Number can't be divided by 0\n");
                   }
                    break;
        default:
                      printf("You entered a wrong choice\n");//to display the wrong selection of choice
                       break;
}
return 0;
}
*/

/*
// program 2 :
#include<stdio.h>
int main()//return type function without argument
{
    printf("To find the area of  right angled triangle..\n");

    int x,y;//to variables for base and altitude

    //taking input from the user

    printf("Enter the base measure:\n");
    scanf("%d",&x);

    printf("Enter the altitude value:\n");
    scanf("%d",&y);

    printf("Area of triangle is: %d\n",x*y/2);//  printf used for output using formula in the end

    // The output will not be in the decimal form as the format specifier used is for integer output

    return 0;
}
*/

/*
// program 3 :
#include<stdio.h>
int main()//return type function without argument
{
    printf("To find simple interest..\n");// program title

    int x,y,z,i,amount;//five variables = 3 for formula and 1,1 for interest and amount resp.

    printf("Enter the principle amount:\n");
    scanf("%d",&x);

    printf("Enter the rate of interest:\n");
    scanf("%d",&y);

    printf("Enter the period:\n");
    scanf("%d",&z);

    printf("\nThe interest for the mentioned amount for mentioned period is:%d\n\n",i,i=x*y*z/100);
    // interest calculation formula

    printf("The net amount is:%d\n",amount=i+x);// amount formula

    return 0;
}
*/

/*
// program 4:
#include<stdio.h>
int main()// return type function without argument

{
    int a,b;
    printf("\nEnter first number:");
    scanf("%d",&a);

    printf("\nEnter second number:");
    scanf("%d",&b);
    printf("\nBefore swapping: %d and %d",a,b);

    a=a+b;
    b=a-b; // b = (a+b)-b =a
    a=a-b;// a = a-(a-b) = b

    printf("\nAfter swapping: %d and %d",a,b);

    return 0;
}
*/

/*
// program 5 :
#include<stdio.h>
void main()//non return type function without argument
{
    float x;//conversion factors are in decimal system hence to get the answer float is used

    int choice;// switching is easy when integer choices are there
    printf("Enter the distance in km:");
    scanf("%f",&x);

    printf("Enter your choice:\n");
    printf("1. meter\n2. feet\n3. inches\n4. centimeter\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1 : printf("The distance in meter is:%f",x*1000);
        break;

        case 2 : printf("The distance in feet is:%f",x*3280.8399);
        break;

        case 3 : printf("The distance in inches is:%f",x*39370.0787);
        break;

        case 4 : printf("The distance in centimeter is:%f",x*100000);
        break;

        default : printf("You entered a wrong choice!!");
        break;
    }

}
*/

/*
// program 6 :
#include<stdio.h>
int main()// return type function without argument
{
    printf("To change degree Celsius to degree Fahrenheit...\n");// program title

    float x;
    printf("\nEnter a Celsius value to convert:\n");// taking celsius value to convert
    scanf("%f",&x);// %f is format specifier for the float datatype

    printf("\nFahrenheit value is:%f",x*9/5+32);// conversion formula

    return 0;
}
*/

/*
// program 7:
#include<stdio.h>
int main()//return type function without argument
{
    int x; // single integer is to be taken as input
    printf("Enter a number:");
    scanf("%d",&x);
    if(x<0)// condition for negative number
    {
        printf("The number is negative");
    }
    if(x==0)
    {
        printf("The number is zero ");
    }
    if(x>0)// condition for positive number
    {
        printf("The number is positive");
    }
    return 0;
}
*/

/*
//program 8 :
#include<stdio.h>
int main()// return type function without argument
{
    int x;
    printf("Enter your obtained marks:");
    scanf("%d",&x);

   if(x<33)
    {
        printf("Sorry,\nYou are not qualified");
    }
    if(33<x) // && x<101
    {   if(x<101)
         // these two if can be replaced by using && operator in one if condition
        printf("Congrats\nYou are qualified!!");
    }
    if(x>100)
    {
        printf("\nYou entered a wrong value");
    }
    return 0;
}
*/

/*
// program 9 :
#include<stdio.h>
int main()//return type function without any argument
{

    int a,b,c;//we have to find the maximum out of these 3 numbers

    //taking input from the user

    printf("Enter the first number:\n");
    scanf("%d",&a);

    printf("\nEnter the second number:\n");
    scanf("%d",&b);

    printf("\nEnter the third number:\n");
    scanf("%d",&c);

    if(a>=b && a>=c)//two condition to be satisfied together using logical && operator
    {
        printf("\n%d is the largest number among the three\n",a);
    }

    if(b>=a && b>=c)
    {
        printf("\n%d is the largest number among the three\n",b);
    }

    if(c>=a && c>=b)
    {
        printf("\n%d is the largest number among the three\n",c);
    }

    return 0;
}
*/

/*
// program 10 :
#include<stdio.h>
int main()// return type function without argument
{
    char ch;// character input is to be taken
    printf("\nEnter any character :");
    scanf("%c",&ch);// format specifiers for character is %c

    // using if - else if

    if(ch>='0' && ch<='9')
    {
        printf("\nEntered character is a digit !");
    }

    else if(ch>='A' && ch<='Z')
    {
        printf("\nEntered character is a capital letter !");
    }

    else if(ch>='a' && ch<='z')
    {
        printf("\nEntered character is a small letter !");
    }

    else
    {
        printf("\nEntered character is a special character !");
    }

    return 0;
}
*/

/*
//program 11 :
#include<stdio.h>
int main()// return type function without argument

{
    int a[10],i,max,min;
    printf("\nEnter ten values:\n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    max=a[0];// assuming that a[0] is maximum

    for(i=0;i<10;i++)
    {
        if(a[i]>max)// if any number is greater than our assumed number maximum will change
        {
            max=a[i];
        }
    }

    printf("\nMaximum out of ten values is %d",max);// output of maximum

    min=a[0];// assuming that a[0] is minimum

    for(i=0;i<10;i++)
    {
        if(a[i]<min)// if any number is minimum than our assumed number minimum will change
        {
            min=a[i];
        }
    }

    printf("\nMinimum out of ten values is %d",min);// output of minimum

    return 0;
}
*/

/*
// program 12 :
#include<stdio.h>
int fact(int num)//return type function with argument(num)
{
    if( num ==1 || num ==0)// base case
    {
        return 1;// value of 0 and 1 factorial is 1
    }
    else
    {
        return(num*fact(num - 1));// formula to find the factorial
    }
}

int main()// return type function without argument
{
    int num;
    printf ("Enter the number you want factorial of:\n");
    scanf("%d",&num);

    printf("\nThe factorial of %d is %d\n",num,fact(num));
    // first %d will get the value of num and the second %d will get the value of fact(num)

    return 0;
}
*/

/*
// program 13 :
#include<stdio.h>
int fib(int num)
{
    int i;
    if(num == 1)
    {
        return 0;
    }
    if(num ==2 || num ==3)
    {
        return 1;
    }
    else
    {
       return(fib(num-1)+fib(num-2));
    }
}

int main()// return type function without argument
{
    int num;
    printf("Enter the number for which you want to find the term in fibonacci series:\n");
    scanf("%d",&num);

    printf("\nThe term in fibonacci series for %d is %d\n",num,fib(num));
    return 0;
}
*/

/*
// program 14 :
#include<stdio.h>
int main()
{
   int n,i,flag=0;
   printf("\nEnter the number to check: ");
   scanf("%d",&n);
   for(i=2;i<=n/2;i++)
   {
     if(n%i==0)
     {
       printf("Number is not prime number");
       flag=1;
       break;
       }
     }
     if(flag==0){
     printf("\n%d is a prime number",n);
     }
     return 0;
}
*/

/*
// program 15 :
#include<stdio.h>
#include<string.h>
int main()
{   char str[20],ch,flag=1;
    int i=0;

    printf("Enter String \n");
          gets(str);
    printf("Enter Character to Search in String : ");
          scanf("%c",&ch);
    printf("Character ");
          for(i=0;str[i]!='\0';i++)
          {
            if(str[i]==ch){
               printf(" %d ",i+1);
        flag=0;
          }
           }
            if(flag==1){
               printf("NOT FOUND");
           }

    return 0;
}
*/

/*
// program 16 :
#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],c1,c2;
    int i;
    printf("Enter the string : ");
    gets(s);
    printf("Enter a character replace : ");
    c1=getchar();
    getchar();
    printf("Enter character to replace  with  %c : ",c1);
    c2=getchar();
    printf("Before replace : %s",s);
    for(i=0;s[i];i++)
    {
    if(s[i]==c1)
    {

   s[i]=c2;
   }
}
    printf("\nAfter replace : %s",s);
    return 0;
}
*/

/*
// program 17:
#include<stdio.h>
void main()
{
    struct book
{
    char name[10];
    float price;
   int pages;
};
struct book b1,b2,b3;
printf("\nEnter name,price & no of pages of 3 books\n");
scanf("%s %f %d",b1.name,&b1.price,&b1.pages);
scanf("%s %f %d",b2.name,&b2.price,&b2.pages);
scanf("%s %f %d",b3.name,&b3.price,&b3.pages);
printf("\nAnd this is what you entered");
printf("\n%s %f %d",b1.name,b1.price,b1.pages);
printf("\n%s %f %d",b2.name,b2.price,b2.pages);
printf("\n%s %f %d",b3.name,b3.price,b3.pages);
}
*/

/*
// program 18 :
#include<stdio.h>
int main()// return type function without argument
{
    int x;// declaring a variable
    printf("\nEnter the number:\n");
    scanf("%d",&x);

    int*ptr=&x;//  ptr is pointer to x

    printf("\nThe address of %d is %x\n",x,ptr);// %x is format specifier for hexadecimal number
    printf("\nThe number entered is %d\n",*ptr);
    // *ptr will print the value but only ptr will print the address of the variable

    return 0;
}
*/

/*
// program 19 :
#include<stdio.h>
    int main()
    {
    int x,y,*a,*b,i;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    printf("\nBefore Swapping\n\tx = %d\n\ty = %d\n",x,y);
    a = &x;
    b = &y;
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("\nAfter Swapping\n\tx = %d\n\ty = %d\n",x,y);
    return 0;
    }
*/

/*
// program 20 :
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main( )
{
    FILE *fp ;char s[80] ;
    fp=fopen("xyz.txt","w");
    if(fp==NULL)
    {
        puts ("Cannot open file") ;
        // exit();
        }
        printf("\nEnter a few lines of text:\n") ;
        while(strlen(gets(s))>0)
        {
            fputs(s,fp);
            fputs("\n",fp);
        }
    fclose(fp);
    }
*/

/*
#include <stdio.h>
int main()
{
    float x;
    int choice;
    printf("\nEnter the value of temperature in celsius:\t");
    scanf("%f", &x);

    printf("\n1. kelvin\n2. fahreinheit\n");
    printf("\nEnter your choice:\t");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nThe value in kelvin is %f\n", (x + 273.15));
        break;

    case 2:
        printf("\nThe value in fahrenheit is %f\n", (x * 9 / 5 + 32));
        break;

    default:
        printf("\nYou entered a wrong choice !!\n ");
        break;
    }
    return 0;
}
*/

/*Balagurusamy Practice Exercises*/

/*
#include<stdio.h>
int main()
{
    printf("\nFirst Line  : Vivek Tiwari\n");
    printf("\nSecond Line : A/39,Krishna Park\n");
    printf("\nThird Line  : Ahmedabad,Gujarat\n");

    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    printf("\nFirst Line  : Vivek Tiwari\n");
    printf("___________________________________\n");
    printf("\nSecond Line : A/39,Krishna Park\n");

    printf("\nThird Line  : Ahmedabad,Gujarat\n");
    printf("___________________________________\n");

    return 0;
}
*/

#include<stdio.h>
    void main()
    {
        int a;
        printf("Enter your marks:\n");
        scanf("%d",&a);
    }
