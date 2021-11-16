#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

// H?m thay d?i k?ch c? c?a khung cmd v?i tham s? truy?n v?o l? chi?u cao, chi?u r?ng.
void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}

// H?m t? m?u.
void textcolor(int x)
{
	HANDLE mau;
	mau=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau,x);
}
void set_color ( int code ) {
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute( color , code );
}
void setFontSize(int FontSize)
{
CONSOLE_FONT_INFOEX info = {0};
info.cbSize = sizeof(info);
info.dwFontSize.Y = FontSize; // leave X as zero
info.FontWeight = FW_NORMAL;

SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), NULL, &info);
}

// H?m d?ch chuy?n con tr? d?n t?a d? x, y.
void gotoxy(int x,int y)
{    
	HANDLE hConsoleOutput;    
	COORD Cursor_an_Pos = {x-1,y-1};   
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);    
	SetConsoleCursorPosition(hConsoleOutput , Cursor_an_Pos);
}


