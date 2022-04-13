#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h> //sets color of text and background, used for appearance
char square[10] = {'0','1','2','3','4','5','6','7','8','9'}; //plots on board (If square is only 9 the board wont work?)
int place;

void gameBoard()
{
    system("cls");
    printf(" %c  | %c|  %c \n",square[1],square[2],square[3]);
    printf("____|___|____\n");
    printf(" %c  | %c|  %c  \n",square[4],square[5],square[6]);
    printf("____|___|____\n");
    printf("    |   |    \n");
    printf(" %c  | %c|  %c\n\n\n",square[7],square[8],square[9]);
}


int gameTime();
int main()
{
    char menu;

    system("color 80");
    printf("\t\t\t\t\t\t\t    TIC TAC TOE\n\n\n");
    printf("\t\t\t\t\t\t\t        |   |   \n");
    printf("\t\t\t\t\t\t\t    ____|___|____\n");
    printf("\t\t\t\t\t\t\t        |   |    \n");
    printf("\t\t\t\t\t\t\t    ____|___|____\n");
    printf("\t\t\t\t\t\t\t        |   |    \n");
    printf("\t\t\t\t\t\t\t        |   |   \n\n\n");
    printf("\t\t\t\t\t\t\tPRESS [y] AND [enter] TO BEGIN\n\n");
    printf("\t\t\t\t\t\t\t  PRESS [n] AND [enter] TO EXIT\n\t\t\t\t\t\t\t");
    scanf("%c",&menu);
switch(menu){
case 'y':
gameTime();

    break;

case 'n':
     printf("\nExiting Game...\n");
     break;
default:
    system("cls");
         main();

}

}

int playerOne()
{
    int turn = 1; //will be 1 for p1 and 2 for p2
    char placeMarkPlayerOne = 'X';
    printf("\nPlayer One, Place your X: ");
    scanf("%d",&place);
while (turn == 1)
        {
        if (place == 1 && square[1] == '1')
            square[1] = placeMarkPlayerOne;
        else if(place == 2 && square[2] == '2')
            square[2] = placeMarkPlayerOne;
        else if(place == 3 && square[3] == '3')
            square[3] = placeMarkPlayerOne;
        else if(place == 4 && square[4] == '4')
            square[4] = placeMarkPlayerOne;
        else if(place == 5 && square[5] == '5')
            square[5] = placeMarkPlayerOne;
        else if(place == 6 && square[6] == '6')
            square[6] = placeMarkPlayerOne;
        else if(place == 7 && square[7] == '7')
            square[7] = placeMarkPlayerOne;
        else if(place == 8 && square[8] == '8')
            square[8] = placeMarkPlayerOne;
        else if(place == 9 && square[9] == '9')
            square[9] = placeMarkPlayerOne;
        else
        {
            printf("Invalid Input. Please Try Again.");
            return playerOne();
        }
turn = 2;
    }
return 0;
}

int playerTwo()
{
    int turn = 2; //will be 0 for p1 and 1 for p2
    char placeMarkPlayerTwo = 'O';
    printf("\nPlayer Two, Place your O: ");
    scanf("%d",&place);
while (turn == 2)
        {
        if (place == 1 && square[1] == '1')
            square[1] = placeMarkPlayerTwo;
        else if(place == 2 && square[2] == '2')
            square[2] = placeMarkPlayerTwo;
        else if(place == 3 && square[3] == '3')
            square[3] = placeMarkPlayerTwo;
        else if(place == 4 && square[4] == '4')
            square[4] = placeMarkPlayerTwo;
        else if(place == 5 && square[5] == '5')
            square[5] = placeMarkPlayerTwo;
        else if(place == 6 && square[6] == '6')
            square[6] = placeMarkPlayerTwo;
        else if(place == 7 && square[7] == '7')
            square[7] = placeMarkPlayerTwo;
        else if(place == 8 && square[8] == '8')
            square[8] = placeMarkPlayerTwo;
        else if(place == 9 && square[9] == '9')
            square[9] = placeMarkPlayerTwo;
        else
        {
            printf("Invalid Input. Please Try Again.");
            return playerTwo();
        }
turn = 1;
    }
    return 0;
}
int win(){ //return of 2 indicates player 2 won while return of 1 indicates player 1 won
    char placeMarkPlayerOne = 'X';
    char placeMarkPlayerTwo = 'O';
    for(int i=0;i<9;i++)
    {
    if(square[1] == square[2] && square[2] == square[3] && square[1] == placeMarkPlayerOne)
        return 1;
    else if(square[1] == square[2] && square[2] == square[3] && square[1] == placeMarkPlayerTwo)
        return 2;
    else if(square[4] == square[5] && square[5] == square[6] && square[4] == placeMarkPlayerOne)
        return 1;
    else if(square[4] == square[5] && square[5] == square[6] && square[4] == placeMarkPlayerTwo)
        return 2;
    else if(square[7] == square[8] && square[8] == square[9] && square[7] == placeMarkPlayerOne)
        return 1;
    else if(square[7] == square[8] && square[8] == square[9] && square[7] == placeMarkPlayerTwo)
        return 2;
    else if(square[1] == square[4] && square[4] == square[7] && square[1] == placeMarkPlayerOne)
        return 1;
    else if(square[1] == square[4] && square[4] == square[7] && square[1] == placeMarkPlayerTwo)
        return 2;
    else if(square[1] == square[4] && square[4] == square[7] && square[1] == placeMarkPlayerOne)
        return 1;
    else if(square[2] == square[5] && square[5] == square[8] && square[2] == placeMarkPlayerTwo)
        return 2;
    else if(square[3] == square[6] && square[6] == square[9] && square[3] == placeMarkPlayerOne)
        return 1;
    else if(square[3] == square[6] && square[6] == square[9] && square[3] == placeMarkPlayerTwo)
        return 2;
    else if(square[3] == square[5] && square[5] == square[7] && square[3] == placeMarkPlayerOne)
        return 1;
    else if(square[3] == square[5] && square[5] == square[7] && square[3] == placeMarkPlayerTwo)
        return 2;
    else if(square[1] == square[5] && square[5] == square[9] && square[1] == placeMarkPlayerOne)
        return 1;
    else if(square[1] == square[5] && square[5] == square[9] && square[1] == placeMarkPlayerTwo)
        return 2;
    else
        return 0;
    }

        return 3;
        //tie is not working
}
int gameTime()
{
win();
    while(win() == 0)
    {
    gameBoard();
    playerOne();
    if(win() == 1)
    {
    system("cls");
    gameBoard();
    printf("\nPlayer 1 Wins!!!");
    break;
    }
    gameBoard();
    playerTwo();
    if(win() == 2)
    {
    system("cls");
    gameBoard();
    printf("\nPlayer 2 Wins!!!");
    break;
    }
    if(win() == 3)
    {
    system("cls");
    gameBoard();
    printf("\nPlayer 1 and 2 are Tied!");
    break;
    }
    }
    return 0;
}
