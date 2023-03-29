#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initBoard(int board[][5]);
void displayBoard(int board[][5]);
void genShip(int ships[][2]);
void getshot(int shot[2]);
int hit(int shot[2],int ship[][2]);
void type(int shot[2],int ships[][2],int attempt);
void changeBoard(int shot[2],int ships[][2],int board[][5]);


int main()
{
   int board[5][5];
   int ships[3][2];
   int shot[2];
   int attempts=0,hits=0;

  printf("\n");
  do{

   initBoard(board);
   getShip(ships);
   attempts++;

   if(hit(shot,ships)){
        type(shot,ships,attempts);
        hits++;
   }else

        type(shot,ships,attempts);
        changeBoard(shot,ships,board);
    }while(hits!=3);

    printf("\n\nGamve over. You hit the tree ships in %d attempts",attempts);
    displayBoard(board);

    return 0;
}
