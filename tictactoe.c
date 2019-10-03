#include <stdio.h>
#include <windows.h>
#include <string.h>

#include "splash.h"
#include "layout.h"


#define ENTER 13
#define ESCAPE 27
#define UP_ARROW 72
#define RIGHT_ARROW 77
#define LEFT_ARROW 75
#define DOWN_ARROW 80
#define BACKSPACE 8
#define SPACE 32
#define F1_BUTTON 59
#define DELETE_BUTTON 83
#define ALT 224
#define MARK 254

char square[3][3];

int board(char player1[10], char player2[10]);
int i=0, j=0;


int main(){
	hidecursor();
	splashscreen();
	showcursor();
	
	char player1[10];
	char player2[10];
	
	gotoxy(45,5); printf("Enter Player 1 name: ");
	scanf("%s", player1);
	gotoxy(45,6); printf("Enter Player 2 name: ");
	scanf("%s", player2);
	system("cls");
	board(player1, player2);
	hidecursor();
	arrow(player1, player2);

}

COORD xy = {0,0};

int board(char player1[10], char player2[10]){
	gotoxy(54,5); printf("Tic Tac Toe");
	gotoxy(47,6); printf("Permainan Jadul Sejak 1884");
	gotoxy(47,8); printf("%s (X) vs %s (O)", player1, player2);
	
	gotoxy(50,10); printf("     |     |     \n");
    gotoxy(50,11); printf("  %c  |  %c  |  %c \n", square[0][0], square[0][1], square[0][2]);

    gotoxy(50,12); printf("_____|_____|_____\n");
    gotoxy(50,13); printf("     |     |     \n");

    gotoxy(50,14); printf("  %c  |  %c  |  %c \n", square[1][0], square[1][1], square[1][2]);

    gotoxy(50,15); printf("_____|_____|_____\n");
    gotoxy(50,16); printf("     |     |     \n");

    gotoxy(50,17); printf("  %c  |  %c  |  %c \n", square[2][0], square[2][1], square[2][2]);

    gotoxy(50,18); printf("     |     |     \n\n");
    
    
}


int arrow(char player1[10], char player2[10]){
 int chr1, chr2, player = 1, a;
 char mark;
 
 printf("It's %s's turn", player1);
 gotoxy(40,25);
 printf("Press any arrow key...Press ENTER to mark");
 chr1 = getch();
 
 if (chr1 == 0xE0) //to check scroll key interrupt
 	{				
	while(TRUE){ 
 		 chr2 = getch();  //to read arrow key
 		 if(chr2 == ESCAPE) break;
 	 switch(chr2)
 	 {
 	    case UP_ARROW: i--;
 	   	 if(i<0) i == 0;
			 if(square[i][j] == NULL){
				 square[i][j] = MARK;
				 board(player1, player2);
				 square[i][j] = NULL;
				}
			 else{
			 	board(player1, player2);
			 }
	       break;
	    case DOWN_ARROW: i++; 
	   	  if(i>2) i == 2;
	   	  	 if(square[i][j] == NULL){
				 square[i][j] = MARK;
				 board(player1, player2);
				 square[i][j] = NULL;
				}
			 else{
			 	board(player1, player2);
			 }
	       break;
	    case LEFT_ARROW: j--; 
	   	  if(j<0) j == 0; 
	   	  	 if(square[i][j] == NULL){
				 square[i][j] = MARK;
				 board(player1, player2);
				 square[i][j] = NULL;
				}
			 else{
			 	board(player1, player2);
			 }
 	       break;
 	    case RIGHT_ARROW: j++;
 	  	  if(j>2) j == 2; 
 	  	  	 if(square[i][j] == NULL){
				 square[i][j] = MARK;
				 board(player1, player2);
				 square[i][j] = NULL;
				}
			 else{
			 	board(player1, player2);
			 }
	        break;
	    case ENTER:
	    	if(square[i][j] == 'X'||square[i][j] == 'O'){
	    		printf("  -> invalid move");
	    		player--;
			}
	    	else{
				mark = (player % 2 == 1) ? 'X' : 'O'; 
				square[i][j] = mark;
				board(player1, player2);
				if(player % 2 ==1) printf("\rIt's %s's turn                       \n\n", player2); 
				else printf("\rIt's %s's turn                   \n\n", player1); 
				printf("\n");
			}
			player++;
			break;
 		}
		}
	};
}


void gotoxy (int x, int y)
{
        xy.X = x; xy.Y = y; // get X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), xy);
}

void SetPosition(int X, int Y)
{
HANDLE Screen;
Screen = GetStdHandle(STD_OUTPUT_HANDLE);
COORD Position={X, Y};

SetConsoleCursorPosition(Screen, Position);
}
