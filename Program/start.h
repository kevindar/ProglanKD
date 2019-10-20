#ifndef START_H_
#define START_H_

#define RED    			 "\x1b[31m"
#define BOLD_RED 		 "\033[1;31m"
#define GREEN			 "\033[0;32m"
#define BOLD_GREEN   	 "\033[1;32m"
#define YELLOW  		 "\033[0;33m"
#define BOLD_YELLOW		 "\033[01;33m"
#define BLUE   			 "\033[1;34m"
#define MAGENTA			 "\x1b[35m"
#define CYAN   			 "\x1b[36m"
#define RESET   		 "\x1b[0m"

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

int Mmenu(){

	menu();
	gotoxy(40,15);
	printf(BOLD_YELLOW"--------------------------------");
	gotoxy(40,16);
	printf("%c", sel[i][0]);
	gotoxy(50,16);
	printf("Single Player");
	gotoxy(40,17);
	printf("--------------------------------"RESET);
	
	gotoxy(40,18);
	printf(BOLD_GREEN"--------------------------------");
	gotoxy(40,19);
	printf("%c", sel[i][0]);
	gotoxy(51,19);
	printf("Two Player");
	gotoxy(40,20);
	printf("--------------------------------"RESET);
}

int menu(){

	char button1, button2;
	i = 0, j= 0;
	button1 = getch();
	if (button1 == 0xE0) //to check scroll key interrupt
 	{				
		while(TRUE){ 
	 		 button2 = getch();  //to read arrow key
	 		 if(button2 == ESCAPE) break;
	 	 switch(button2)
	 	 {
	 	    case UP_ARROW: i--;
	 	   	 if(i<0) i ++;
	 	   	 	if(sel[i][j] = NULL){
				 	sel[i][j] = MARK;
				 	Mmenu();
				 	sel[i][j] = NULL;
				 }
		       break;
		       
		    case DOWN_ARROW: i++; 
		   	  if(i>2) i--;
				if(sel[i][j] = NULL){
				 	sel[i][j] = MARK;
				 	Mmenu();
				 	sel[i][j] = NULL;
				 }
		       break;
		       
		    case ENTER:
		    	game();
				break;
				
			}
		};
		}
}

#endif
