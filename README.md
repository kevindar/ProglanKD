# ProglanKD
Proyek mini Tic Tac Toe oleh Kevin Darmawan dan Farhan Almasyhur

##main function
disini memunculkan splashscreen, dan menginput nama pemain 
```bash
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
	arrow(player1, player2);
```

###board()
memunculkan layout dari tictactoe 4x4
```bash
	gotoxy(54,5); printf("Tic Tac Toe");
	gotoxy(47,6); printf("Permainan Jadul Sejak 1884");
	gotoxy(50,8); printf("%s (O) vs %s (X)", player1, player2);
	gotoxy(50,10); printf("     |     |     \n");
  gotoxy(50,11); printf("  %c  |  %c  |  %c \n", square[0][0], square[0][1], square[0][2]);
  gotoxy(50,12); printf("_____|_____|_____\n");
  gotoxy(50,13); printf("     |     |     \n");
  gotoxy(50,14); printf("  %c  |  %c  |  %c \n", square[1][0], square[1][1], square[1][2]);
  gotoxy(50,15); printf("_____|_____|_____\n");
  gotoxy(50,16); printf("     |     |     \n");
  gotoxy(50,17); printf("  %c  |  %c  |  %c \n", square[2][0], square[2][1], square[2][2]);
  gotoxy(50,18); printf("     |     |     \n\n");
```

###arrow()
mengarahkan tempat dimana pemain akan mengisi X atau O
```bash
 int chr1, chr2, player = 1, a;
 char mark;
 
 printf("It's %s's turn\n\n", player1);
 printf("Press any arrow key...\n");
 chr1 = getch();
 
 if (chr1 == 0xE0) //to check scroll key interrupt
 	{				
	while(TRUE){ 
 		 chr2 = getch();  //to read arrow key
 		 if(chr2 == ESCAPE) break;
 	 switch(chr2)
 	 {
 	    case UP_ARROW: i--; 
 	   	 if(i<0) i == 0; printf("\r%c", square[i][j]);
	       break;
	    case DOWN_ARROW: i++; 
	   	  if(i>2) i == 2; printf("\r%c", square[i][j]);
	       break;
	    case LEFT_ARROW: j--; 
	   	  if(j<0) j == 0; printf("\r%c", square[i][j]);
 	       break;
 	    case RIGHT_ARROW: j++;
 	  	  if(j>2) j == 2;  printf("\r%c", square[i][j]);
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
				if(player % 2 ==1) printf("\rIt's %s's turn                       \n\n", player1); 
				else printf("\rIt's %s's turn                   \n\n", player2); 
				printf("\n");
			}
			player++;
			break;
 		 }
		}
	 };
}
```

