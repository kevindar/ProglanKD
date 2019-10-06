#ifndef CHECKWIN_H_
#define CHECKWIN_H_

void checkwin(char square[3][3],char player1[10],char player2[10]){
	if(square[0][0]==square[0][1] && square[0][1] == square[0][2] && square[0][0] != NULL){
		if(square[0][0]=='X'){
			Sleep(1000);
			system("cls");
			win1(player1);
		}
		else{
			Sleep(3000);
			system("cls");
			win2(player2);
		}
	}
	else if(square[1][0]==square[1][1]&&square[1][1] == square[1][2] && square[1][0] != NULL){
		if(square[1][0]=='X'){
			Sleep(1000);
			system("cls");
			win1(player1);
		}
		else{
			Sleep(1000);
			system("cls");
			win2(player2);
		}
	}
	else if(square[2][0]==square[2][1]&&square[2][1] == square[2][2] && square[2][0] != NULL){
		if(square[2][0]=='X'){
			Sleep(1000);
			system("cls");
			win1(player1);	
		}
		else{
			Sleep(1000);
			system("cls");
			win2(player2);
		}
	}
	else if(square[0][0]==square[1][0]&&square[1][0] == square[2][0] && square[0][0] != NULL){
		if(square[0][0]=='X'){
			Sleep(1000);
			system("cls");
			win1(player1);
		}
		else{
			Sleep(1000);
			system("cls");
			win2(player2);
		}
	}
	else if(square[0][1]==square[1][1]&&square[1][1] == square[2][1] && square[0][1] != NULL){
		if(square[0][1]=='X'){
			Sleep(1000);
			system("cls");
			win1(player1);	
		}
		else{
			Sleep(1000);
			system("cls");
			win2(player2);
		}
	}
	else if(square[0][2]==square[1][2]&&square[1][2] == square[2][2] && square[0][2] != NULL){
		if(square[0][2]=='X'){
			Sleep(1000);
			system("cls");
			win1(player1);	
		}
		else{
			Sleep(1000);
			system("cls");
			win2(player2);
		}
	}
	else if(square[0][0]==square[1][1]&&square[1][1] == square[2][2] && square[0][0] != NULL){
		if(square[0][0]=='X'){
			Sleep(1000);
			system("cls");
			win1(player1);	
		}
		else{
			Sleep(1000);
			system("cls");
			win2(player2);
		}
	}
	else if(square[0][2]==square[1][1]&&square[1][1] == square[2][0] && square[0][2] != NULL){
		if(square[0][2]=='X'){
			Sleep(1000);
			system("cls");
			win1(player1);	
		}
		else{
			Sleep(1000);
			system("cls");
			win2(player2);
		}
	}
	 else if (square[0][0] != NULL && square[0][1] != NULL &&square[0][2] != NULL &&square[1][0] != NULL &&square[1][1] != NULL &&square[1][2] != NULL &&square[2][0] != NULL &&square[2][1] != NULL &&square[2][2] != NULL){
  			Sleep(1000);
			system("cls");
  			draw();
  			exit(0);
 }
}


void draw(){

	int chr1, chr2, a;
	char str[MAXCHAR];
    FILE *fp;
    
	    fp=fopen("draw.txt", "r");
	    if (fp == NULL)
	        printf("Could not open file");
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf(MAGENTA"%s", str);
	    printf(RESET);
	    fclose(fp);
	    splashSong();
	    
}

void win1(char player1[10]){
	char str[MAXCHAR];
    FILE *fp;
    
	    fp=fopen("P1.txt", "r");
	    if (fp == NULL)
	        printf("Could not open file");
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf(BLUE"%s", str);
	    printf(RESET);
	    fclose(fp);
	    
	winSong();  
	gotoxy(15,12);
	printf("\n\n %s Menang! yeay !", player1);
		    
	 while(TRUE){	
		gotoxy(50,0);
		printf(YELLOW"\t\t\t	             ___________");
		gotoxy(50,1);
		printf("\t\t\t	            '._==_==_=_.'");
		gotoxy(50,2);
		printf("\t\t\t	            .-\\:      /-.");
		gotoxy(50,3);
		printf("\t\t\t	           | (|:.     |) |");
		gotoxy(50,4);
		printf("\t\t\t	            '-|:.     |-'");
		gotoxy(50,5);
		printf("\t\t\t	              \\::.    /");
		gotoxy(50,6);
		printf("\t\t\t 	               '::. .'");
		gotoxy(50,7);
		printf("\t\t\t 	                 ) (");
		gotoxy(50,8);
		printf("\t\t\t 	               _.' '._");
		gotoxy(50,9);
		printf("\t\t\t	              `\"\"\"\"\"\"\"\"\""RESET);
		
		sleep(1);
		gotoxy(50,0);
		printf("\t\t\t	             ___________");
		gotoxy(50,1);
		printf("\t\t\t	            '._==_==_=_.'");
		gotoxy(50,2);
		printf("\t\t\t	            .-\\:      /-.");
		gotoxy(50,3);
		printf("\t\t\t	           | (|:.     |) |");
		gotoxy(50,4);
		printf("\t\t\t	            '-|:.     |-'");
		gotoxy(50,5);
		printf("\t\t\t	              \\::.    /");
		gotoxy(50,6);
		printf("\t\t\t 	               '::. .'");
		gotoxy(50,7);
		printf("\t\t\t 	                 ) (");
		gotoxy(50,8);
		printf("\t\t\t 	               _.' '._");
		gotoxy(50,9);
		printf("\t\t\t	              `\"\"\"\"\"\"\"\"\"");
		sleep(1);
	}
	exit(0);
}
void win2(char player2[10]){
	char str[MAXCHAR];
    FILE *fp;
    
	    fp=fopen("P2.txt", "r");
	    if (fp == NULL)
	        printf("Could not open file");
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf(GREEN"%s", str);
	    printf(RESET);
	    fclose(fp);
	    
	winSong();
	gotoxy(150, 12);
	printf("%s Menang! yeay !", player2);	    
	 while(TRUE){	
		gotoxy(50,0);
		printf(YELLOW"\t\t\t	             ___________");
		gotoxy(50,1);
		printf("\t\t\t	            '._==_==_=_.'");
		gotoxy(50,2);
		printf("\t\t\t	            .-\\:      /-.");
		gotoxy(50,3);
		printf("\t\t\t	           | (|:.     |) |");
		gotoxy(50,4);
		printf("\t\t\t	            '-|:.     |-'");
		gotoxy(50,5);
		printf("\t\t\t	              \\::.    /");
		gotoxy(50,6);
		printf("\t\t\t 	               '::. .'");
		gotoxy(50,7);
		printf("\t\t\t 	                 ) (");
		gotoxy(50,8);
		printf("\t\t\t 	               _.' '._");
		gotoxy(50,9);
		printf("\t\t\t	              `\"\"\"\"\"\"\"\"\""RESET);
		
		sleep(1);
		gotoxy(50,0);
		printf("\t\t\t	             ___________");
		gotoxy(50,1);
		printf("\t\t\t	            '._==_==_=_.'");
		gotoxy(50,2);
		printf("\t\t\t	            .-\\:      /-.");
		gotoxy(50,3);
		printf("\t\t\t	           | (|:.     |) |");
		gotoxy(50,4);
		printf("\t\t\t	            '-|:.     |-'");
		gotoxy(50,5);
		printf("\t\t\t	              \\::.    /");
		gotoxy(50,6);
		printf("\t\t\t 	               '::. .'");
		gotoxy(50,7);
		printf("\t\t\t 	                 ) (");
		gotoxy(50,8);
		printf("\t\t\t 	               _.' '._");
		gotoxy(50,9);
		printf("\t\t\t	              `\"\"\"\"\"\"\"\"\"");
		sleep(1);
	}
		

	exit(0);
}


#endif
