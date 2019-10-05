#ifndef SPLASH_H_
#define SPLASH_H_

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


void splashscreen(){
	int i, a=0;
	char *filename;
    char str[MAXCHAR];
    FILE *fp;
    
    
	    fp=fopen("1.txt", "r");
	    if (fp == NULL){
	        printf("Could not open file");
	        return 1;
	    }
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf("%s", str);
	
	    Sleep(600);
		system("cls");
		

	    fp=fopen("2.txt","r");
	    if (fp == NULL){
	        printf("Could not open file");
	        return 1;
	    }
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf("%s", str);
	
	    Sleep(600);
		system("cls");
		

	    fp=fopen("3.txt","r");
	    if (fp == NULL){
	        printf("Could not open file");
	        return 1;
	    }
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf("%s", str);
	
	    Sleep(600);
		system("cls");
		
		fp=fopen("4.txt","r");
	    if (fp == NULL){
	        printf("Could not open file");
	        return 1;
	    }
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf("%s", str);
	
	    Sleep(600);
		system("cls");
		
		fp=fopen("5.txt","r");
	    if (fp == NULL){
	        printf("Could not open file");
	        return 1;
	    }
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf("%s", str);
	
	    Sleep(600);
		system("cls");
		
		fp=fopen("6.txt","r");
	    if (fp == NULL){
	        printf("Could not open file");
	        return 1;
	    }
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf("%s", str);
	
	    Sleep(600);
		system("cls");
		
		fp=fopen("7.txt","r");
	    if (fp == NULL){
	        printf("Could not open file");
	        return 1;
	    }
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf("%s", str);
	
	    sleep(1);
		system("cls");
		
		fp=fopen("8.txt","r");
	    if (fp == NULL){
	        printf("Could not open file");
	        return 1;
	    }
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf(BOLD_RED"%s"RESET, str);
	    gotoxy(45,20); 
		printf("Press any key to START");
		
	fclose(fp);
	getch();
	system("cls");
}


#endif