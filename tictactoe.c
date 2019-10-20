#include <stdio.h>
#include <windows.h>
#include <conio.h>

#include "splash.h"
#include "layout.h"
#include "checkwin.h"
#include "beep.h"


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

char op[2];
char square[4][4];
char player1[10];
char player2[10];
char press[4];
	
int board(char player1[10], char player2[10]);


void gotoxy (int x, int y);
void SetPosition(int X, int Y);

int i=0, j=0;


int main(){
	fullscreen();	//mengubah windows ke full screen
	hidecursor();	//menghilangkan cursor
	splashscreen(); //memulai game dengan splash screen

}


int game(){
	
	//Meminta nama pemain 1 dan pemain 2
	getch();
	showcursor();
	gotoxy(75,5); printf("Enter Player 1 name: ");	
	scanf("%s", player1);
	gotoxy(75,6); printf("Enter Player 2 name: ");
	scanf("%s", player2);
	system("cls");
	//menampilkan background console dan papan Tic Tac Toe
	console();
	board(player1, player2);
	hidecursor();
	//fungsi untuk menerima input panah
	arrow(player1, player2);
}

COORD xy = {0,0};



int board(char player1[10], char player2[10]){
	
	gotoxy(98,10); printf("Tic Tac Toe");
	gotoxy(93,11); printf("Permainan Jadul Sejak 1884");
	gotoxy(102,27); printf("%s (X)", player1);
	gotoxy(105, 28); printf("vs");
	gotoxy(102,29); printf("%s (O)", player2);
	
	//Papan terdiri atas array multidimensi dengan tipe data char 
	//ketika awal permainan, tiap array NULL

	gotoxy(94,13); printf("     |     |     |     \n");
    gotoxy(94,14); printf("  %c  |  %c  |  %c  |  %c \n", square[0][0], square[0][1], square[0][2], square[0][3]);


    gotoxy(94,15); printf("_____|_____|_____|_____\n");
    gotoxy(94,16); printf("     |     |     |     \n");
    
    gotoxy(94,17); printf("  %c  |  %c  |  %c  |  %c \n", square[1][0], square[1][1], square[1][2], square[1][3]);

    gotoxy(94,18); printf("_____|_____|_____|_____\n");
    gotoxy(94,19); printf("     |     |     |     \n");

    gotoxy(94,20); printf("  %c  |  %c  |  %c  |  %c \n", square[2][0], square[2][1], square[2][2], square[2][3]);

	gotoxy(94,21); printf("_____|_____|_____|_____\n");
    gotoxy(94,22); printf("     |     |     |     \n");

    gotoxy(94,23); printf("  %c  |  %c  |  %c  |  %c \n", square[3][0], square[3][1], square[3][2], square[3][3]);
    gotoxy(94,24); printf("     |     |     |     \n\n");    
    
    //tombol warna warni
    	gotoxy(94,32);
	    printf(YELLOW "%c"RESET, press[0]);
	    
	    gotoxy(99,32);
	    printf(GREEN "%c"RESET, press[1]);
	    
	    gotoxy(111,32);
	    printf(RED "%c"RESET, press[2]);
	    
	    gotoxy(116,32);
	    printf(CYAN "%c"RESET, press[3]);
}



int arrow(char player1[10], char player2[10]){
	
 i = 0, j = 0;
 int chr1, chr2, player = 1;
 char mark;
 
 gotoxy(35,10);
 printf("It's %s's turn", player1);
 gotoxy(45,40);
 printf("Press any arrow key...Press ENTER to mark");
 
 
 chr1 = getch();

 if (chr1 == 0xE0) //to check scroll key interrupt
	{				
	while(TRUE){ 
 		 chr2 = getch();  //to read arrow key
 		 if(chr2 == ESCAPE) break; //exit game if esc key pressed

	// ketika panah ditekan, array pada board yang semula NULL diisi dengan titik kursor
	// ketika panah digerakkan lagi, array kotak yang ditinggalkan di NULL-kan, dan kotak yang menjadi target diisi titik kursor
	
 	 switch(chr2)
 	 {
 	    case UP_ARROW: i--; 	//menggunakan counter i untuk memetakan kursor di board
 	    	BEEP				//sound effect
 	   	 	if(i<0) i++;		//error handling agar titik kursor tidak keluar layar
 	   	 	press[i] = MARK;	//ketika panah atas ditekan, tombol warna warni akan menyala
			 if(square[i][j] == NULL){
				 square[i][j] = MARK;
				 board(player1, player2);
				 square[i][j] = NULL;
				}
			 else{
			 	board(player1, player2);
			 }
			 press[i] = NULL;
	       break;
	       
	    case DOWN_ARROW: i++; 
	    	BEEP
	   	  	if(i>3) i--;
	   	 	 press[i] = MARK;
	   	  	 if(square[i][j] == NULL){
				 square[i][j] = MARK;
				 board(player1, player2);
				 square[i][j] = NULL;
				}
			 else{
			 	board(player1, player2);
			 }
			press[i] = NULL;
	       break;

	    case LEFT_ARROW: j--;
			BEEP 
	   	  	if(j<0) j++; 
	   	  	press[i+j] = MARK;
	   	  	 if(square[i][j] == NULL){
				 square[i][j] = MARK;
				 board(player1, player2);
				 square[i][j] = NULL;
				}
			 else{

			 	board(player1, player2);
			 }
			 press[i+j] = NULL;
 	       break;
 	       
 	    case RIGHT_ARROW: j++;
 	    	BEEP
 	  	  	if(j>3) j--; 
 	  	  	press[2-j] = MARK;
 	  	  	 if(square[i][j] == NULL){
				 square[i][j] = MARK;
				 board(player1, player2);
				 square[i][j] = NULL;
				}
			 else{
			 	board(player1, player2);
			 }
			 press[2-j] = NULL;
	        break;
	        
	    case ENTER:		//ketika enter ditekan, program akan meletakkan O atau X tergantung giliran siapa
	    	CHOOSE		//sound effect
	    	press[3] = MARK;
	    	if(square[i][j] == 'X'||square[i][j] == 'O'){
				if(player % 2 == 1){
					gotoxy(35,15);
					printf("%s made an invalid move       ", player1);	// error handling jika ada yg menekan enter diatas mark X atau O
					}
				else {
					gotoxy(145,15);
					printf("%s made an invalid move        ", player2);
					}
	    		player--;
	    		
			}
	    	else{
				mark = (player % 2 == 1) ? 'X' : 'O'; 	//menentukan giliran pemain
				square[i][j] = mark;
				board(player1, player2);
				if(player % 2 ==1){
					gotoxy(145,10); printf("It's %s's turn              \n\n", player2);
					gotoxy(35,10); printf("                                ");
					gotoxy(35, 15); printf("                                ");
					}
				else {
					gotoxy(35,10); printf("It's %s's turn              \n\n", player1); 
					gotoxy(145,10); printf("                                    ");
					gotoxy(145,15); printf("                               "); 
					}
			}
			
			player++;
			press[3] = NULL;
			checkwin(square,player1,player2);	// fungsi menang dan seri
			break;
 		}
		}

	};

}
void gotoxy (int x, int y){
        xy.X = x; xy.Y = y; // get X and Y coordinates

        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), xy);
}

void SetPosition(int X, int Y){

HANDLE Screen;
Screen = GetStdHandle(STD_OUTPUT_HANDLE);
COORD Position={X, Y};

SetConsoleCursorPosition(Screen, Position);
}
