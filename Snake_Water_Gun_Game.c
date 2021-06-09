#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gameWin(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }

    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }

    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}

int main()
{

    char you, comp;
    int number;

    printf("Enter your choice\n");
    printf("Enter just *s* for Snake, *w* for Water and *g* for Gun\n");
    scanf("%c", &you);
    srand(time(0));
    number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    printf("You select %c\n", you);
    printf("Computer select %c\n", comp);
    int result = gameWin(you, comp);
    if (result == 1)
    {
        printf("Congratulation, You Win the game!");
    }
    else if (result == -1)
    {
        printf("Ohh!, You Loose the game");
    }
    else
    {
        printf("**The game is a tie!");
    }

    return 0;
}