#include<stdio.h>
int main()
{
    int a,b;
    printf("Hello everyone ! \n\tYour birthdate will tell what kind of person you are ?\n");
    printf("Enter your birth date : ");
    scanf("%d",&a);
    switch(a)
    {
        case 1 : printf("You are helping in nature !");
        break;
        case 2 : printf("You are so good at what you are doing  !");
        break;
        case 3 : printf("You are kind hearted person !");
        break;
        case 4 : printf("You are so sensitive !");
        break;
        case 5 : printf("You cry seeing anyone in pain !");
        break;
        case 6 : printf("You are careless of what people think about you !");
        break;
        case 7 : printf("You are good at communication !");
        break;
        case 8 : printf("You love to be a group !");
        break;
        case 9 : printf("You love to watch movies !");
        break;
        case 10 : printf("You are good at sports !");
        break;
        case 11 : printf("You talk less and let others express themselves !");
        break;
        case 12 : printf("Your personality is amazing  !");
        break;
        case 13 : printf("You love your family and friends  !");
        break;
        case 14 : printf("You are liked by everyone in your family !");
        break;
        case 15 : printf("You don't blame anybody for your mistake !");
        break;
        case 16 : printf("You don't sit for the good to happen !");
        break;
        case 17 : printf("You just love everything you do !");
        break;
        case 18 : printf("You are so talkative but people around you don't get bored !");
        break;
        case 19 : printf("You just accept whatever comes to your way !");
        break;
        case 20 : printf("You don't panic in tricky situations !");
        break;
        case 21 : printf("You are good at impressing anyone with your words !");
        break;
        case 22: printf("You sounds like a harsh person but you are good at heart !");
        break;
        case 23 : printf("You see everyone as your family members !");
        break;
        case 24 : printf("You are street smart to get your work done !");
        break;
        case 25 : printf("You are a person having strength to fight with any difficulties in your life !");
        break;
        case 26 : printf("You are always smiling !");
        break;
        case 27 : printf("You are respected by your loved one's !");
        break;
        case 28 : printf("You never lie for yourself !");
        break;
        case 29 : printf("You trust everyone !");
        break;
        case 30 : printf("You are loyal and courageous !");
        break;
        case 31 : printf("You are a person with patience !");
        break;
        default : printf("Enter a valid input !! ");
        break;
    }
    return 0;
}
