#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int welcomeGame()
{
    printf("Welcome to our text based PvP(player verus player) game! \n  This game based on luck factors \n  For hit your enemy you need to roll bigger dice \n\n\n You can chose 3 of the guns Knife, Gun, Bomb You and the second player both going to start with full healths which is 100 health \nGood luck!");
}

int initGame()
{
    welcomeGame();
}

int baseGame()
{
    initGame();
   /* preGame();
    endGame();*/
}


 int main()
 {
     baseGame();
 }
