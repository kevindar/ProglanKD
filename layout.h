#ifndef LAYOUT_H_
#define LAYOUT_H_

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

void fullscreen()
{
    CONSOLE_SCREEN_BUFFER_INFOEX info = {0};
    int width, height;
    HANDLE hConsole = NULL;

    // maximize window
    ShowWindow(GetConsoleWindow(), SW_SHOWMAXIMIZED);

    // print width/height of this window in terms of columns and rows
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    info.cbSize = sizeof(info);
    GetConsoleScreenBufferInfoEx(hConsole, &info);
}

void hidecursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);

}

void showcursor()
{
	printf("\e[?25h");;
}

void console(){
	char str[MAXCHAR];
	char mark = MARK;
    FILE *fp;
    
	    fp=fopen("console.txt", "r");
	    if (fp == NULL)
	        printf("Could not open file");
	    while (fgets(str, MAXCHAR, fp) != NULL)
	        printf(BLUE"%s", str);
	    fclose(fp);
	    printf(RESET);
	    
	    gotoxy(46,26);
	    printf(YELLOW "%c"RESET, mark);
	    
	    gotoxy(51,26);
	    printf(GREEN "%c"RESET, mark);
	    
	    gotoxy(63,26);
	    printf(RED "%c"RESET, mark);
	    
	    gotoxy(68,26);
	    printf(CYAN "%c"RESET, mark);
	    
}

#endif
