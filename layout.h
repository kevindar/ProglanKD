#ifndef LAYOUT_H_
#define LAYOUT_H_

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

#endif
