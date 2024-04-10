#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("\nHello !!\n\nWelcome to the world of fun...\n"); // welcoming the user for the game

    printf("\nDo you want to play a game?\n"); // asking so that we can start the game

    printf("\nPress\n1 for yes\n0 for no\n\n"); // giving options to choose

    scanf("%d", &a);

    if (a == 1) // for positive response
    {
        printf("\nGreat!!\nLet's Go...\n");
    }

    else if (a == 0) // for negative response
    {
        printf("\nOK!!\nWhen you want to play then come...\n");
        goto end; // used for ending the program here as negative input is given
    }

    else
    {
        printf("\nYou are disappointing me..\n");
        goto end; // used for ending the program as random input is provided
    }

    printf("\n#THE PROCESS\n");

    printf("\nI will ask you a question and your answer will describe your character !!\n"); // this is the game in which the answer will provide the feedback about one's character

    printf("\nDo you want to continue ?\n"); // asking if user is agree or not to go ahead

    printf("\nPress\n1 for yes\n0 for no\n\n"); // giving options

    scanf("%d", &b);

    if (b == 1) // positive response
    {
        printf("\nGreat!!\n");
    }

    else if (b == 0) // negative response
    {
        printf("\nOK!!\nWhen you want to play then come...\n");
        goto end; // for ending the program here as negative response is provided
    }

    else
    {
        printf("\nIf you don't want to play properly why are you wasting your time here ?\nJust go and the meaningful things\n");
        goto end; // for ending the program here as random input is provided
    }

    printf("\nQ. What will you do if you are given 1 Crore rupees ?\n"); // the question

    printf("\n1. Buy a car\n2. Buy a house\n3. World trip\n4. Donate some money to needy and spend remaining amount wisely\n5. Invest the money so that it doesn't end\n\n");
    // options to choose

    scanf("%d", &choice);

    switch (choice) // used to switch between the choices
    {
    case 1:
        printf("\nYou are the person of good choices !!\n"); // result for choosing 1
        break;
    case 2:
        printf("\nYou are having great goals !!\n"); // result for choosing 2
        break;
    case 3:
        printf("\nYou like to travel,\nIts a good choice !!\n"); // result for choosing 3
        break;
    case 4:
        printf("\nYou are a helping person,\nGood to have you here !!\n"); // result for choosing 4
        break;
    case 5:
        printf("\nYou are intelligent,\nNice to meet you !!\n"); // result for choosing 5
        break;

    default:
        printf("\nIf you don't have anything to do,\nPlay the game again\n"); // result for choosing anything out of the choices
        break;
    }
end: // goto will bring the program here if negative or random input is provided
    return 0;
}