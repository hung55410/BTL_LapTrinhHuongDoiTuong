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

void SetColor(int backgound_color, int text_color)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

    int color_code = backgound_color * 16 + text_color;
    SetConsoleTextAttribute(hStdout, color_code);
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

void e(){
    gotoxy(30, 3);
    cout << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << "  " ;
    gotoxy(30, 4);
    cout << char(186) << char(186) << "         " ;
    gotoxy(30, 5);
    cout << char(186) << char(186) << "         " ;
    gotoxy(30, 6);
    cout << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) ;
    gotoxy(30, 7);
    cout << char(186) << char(186) << "         " ;
    gotoxy(30, 8);
    cout << char(186) << char(186) << "         " ;
    gotoxy(30, 9);
    cout << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) ;
}

void e1(){
    // hàm viết chữ E
    gotoxy(57, 3);
    cout << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << "  " ;
    gotoxy(57, 4);
    cout << char(186) << char(186) << "         " ;
    gotoxy(57, 5);
    cout << char(186) << char(186) << "         " ;
    gotoxy(57, 6);
    cout << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) ;
    gotoxy(57, 7);
    cout << char(186) << char(186) << "         " ;
    gotoxy(57, 8);
    cout << char(186) << char(186) << "         " ;
    gotoxy(57, 9);
    cout << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) ;
}

void v(){
    gotoxy(40, 3);
    cout << char(186) << char(186) << "            " << char(186) << char(186) ;
    gotoxy(40, 4);
    cout << " " << char(186) << char(186) << "          " << char(186) << char(186) ;
    gotoxy(40, 5);
    cout << "  " << char(186) << char(186) << "        " << char(186) << char(186) ;
    gotoxy(40, 6);
    cout << "   " << char(186) << char(186) << "      " << char(186) << char(186) ;
    gotoxy(40, 7);
    cout << "    " << char(186) << char(186) << "    " << char(186) << char(186) ;
    gotoxy(40, 8);
    cout << "     " << char(186) << char(186) << "  " << char(186) << char(186) ;
    gotoxy(40, 9);
    cout << "      " << char(186) << char(186) << char(186) << char(186) ;
}

void n(){
    gotoxy(67, 3);
    cout << char(186) << char(186) << char(186) << char(186) << "      " << char(186) << char(186);
    gotoxy(67, 4);
    cout << char(186) << char(186) << " " << char(186) << char(186) << "     " << char(186) << char(186);
    gotoxy(67, 5);
    cout << char(186) << char(186) << "  " << char(186) << char(186) << "    " << char(186) << char(186) ;
    gotoxy(67, 6);
    cout << char(186) << char(186) << "   " << char(186) << char(186) << "   " << char(186) << char(186) ;
    gotoxy(67, 7);
    cout << char(186) << char(186) << "    " << char(186) << char(186) << "  " << char(186) << char(186) ;
    gotoxy(67, 8);
    cout << char(186) << char(186) << "     " << char(186) << char(186) << " " << char(186) << char(186);
    gotoxy(67, 9);
    cout << char(186) << char(186) << "      " << char(186) << char(186) << char(186) << char(186) ;
}

void t(){
    gotoxy(80, 3);
    cout << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186) << char(186);
    gotoxy(80, 4);
    cout << "     " << char(186) << char(186);
    gotoxy(80, 5);
    cout << "     " << char(186) << char(186);
    gotoxy(80, 6);
    cout << "     " << char(186) << char(186);
    gotoxy(80, 7);
    cout << "     " << char(186) << char(186);
    gotoxy(80, 8);
    cout << "     " << char(186) << char(186);
    gotoxy(80, 9);
    cout << "     " << char(186) << char(186);
}

void Text(){
    e(); v(); e1(); n(); t();
}

void Frames(){
    Text();
    gotoxy(89, 12); cout << "V1.0";
    for(int i=28 ; i < 94 ; i++){
        gotoxy(i, 11);
        cout << char(219);
    }
    for(int i=11 ; i<30 ; i++){
        gotoxy(28, i);
        cout << char(219);
    }
    for(int i=11 ; i<30 ;i++){
        gotoxy(94, i);
        cout << char(219);
    }
    for(int i=28 ; i <= 94 ; i++){
        gotoxy(i, 30);
        cout << char(219);
    }
}

void lineHoliday(){
    for(int i=46 ; i < 76 ; i++){
        gotoxy(i, 15);
        cout << char(196);
    }
}

void lineTitle(){
    //Line Tieu de
    gotoxy(53 , 15); cout << char(192);
    gotoxy(77 , 15); cout << char(217);
    for(int i=54 ; i < 77 ; i++){
        gotoxy(i, 15); cout << char(196);
    }
}

void lineYear(){
    //Line Nam
    gotoxy(53 , 17); cout << char(192);
    gotoxy(60 , 17); cout << char(217);
    for(int i=54 ; i < 60 ; i++){
        gotoxy(i, 17); cout << char(196);
    }
}

void lineMonth(){
    //Line Thang
    gotoxy(53 , 19); cout << char(192);
    gotoxy(56 , 19); cout << char(217);
    for(int i=54 ; i < 56 ; i++){
        gotoxy(i, 19); cout << char(196);
    }
}

void lineDay(){
    //Line Ngay
    gotoxy(53 , 21); cout << char(192);
    gotoxy(56 , 21); cout << char(217);
    for(int i=54 ; i < 56 ; i++){
        gotoxy(i, 21); cout << char(196);
    }
}

void lineHour(){
    //Line Gio
    gotoxy(53 , 23); cout << char(192);
    gotoxy(56 , 23); cout << char(217);
    for(int i=54 ; i < 56 ; i++){
        gotoxy(i, 23); cout << char(196);
    }
}

void lineMinute(){
    //Line Phut
    gotoxy(53 , 25); cout << char(192);
    gotoxy(56 , 25); cout << char(217);
    for(int i=54 ; i < 56 ; i++){
        gotoxy(i, 25); cout << char(196);
    }
}

void modalComplete(){
    system("cls");
    Frames();

    gotoxy(57, 19); cout << "COMPLETE";
    gotoxy(48, 20); cout << "Press any key to continue...";
    gotoxy(43, 17); cout << char(219);
    gotoxy(43, 22); cout << char(219);
    gotoxy(79, 17); cout << char(219);
    gotoxy(79, 22); cout << char(219);
    for(int i=44 ; i <= 78 ; i++){
        gotoxy(i, 17); cout << char(219);
    }
    for(int i=44 ; i <= 78 ; i++){
        gotoxy(i, 22); cout << char(219);
    }
    gotoxy(43, 18); cout << char(219);
    gotoxy(79, 18); cout << char(219);
    gotoxy(43, 21); cout << char(219);
    gotoxy(79, 21); cout << char(219);
    gotoxy(43, 20); cout << char(219);
    gotoxy(79, 20); cout << char(219);
    gotoxy(43, 19); cout << char(219);
    gotoxy(79, 19); cout << char(219);

    gotoxy(44, 23); cout << char(92);
    gotoxy(80, 18); cout << char(92);
    for(int i = 45 ; i <=81 ; i++){
        gotoxy(i, 23); cout << char(95);
    }
    gotoxy(81, 19); cout << char(179);
    gotoxy(81, 20); cout << char(179);
    gotoxy(81, 21); cout << char(179);
    gotoxy(81, 22); cout << char(179);
    gotoxy(81, 23); cout << char(179);

}

void modalLook(){
    system("cls");
    Frames();

    gotoxy(54, 19); cout << "KHONG TIM THAY";
    gotoxy(48, 20); cout << "Press any key to continue...";
    gotoxy(43, 17); cout << char(219);
    gotoxy(43, 22); cout << char(219);
    gotoxy(79, 17); cout << char(219);
    gotoxy(79, 22); cout << char(219);
    for(int i=44 ; i <= 78 ; i++){
        gotoxy(i, 17); cout << char(219);
    }
    for(int i=44 ; i <= 78 ; i++){
        gotoxy(i, 22); cout << char(219);
    }
    gotoxy(43, 18); cout << char(219);
    gotoxy(79, 18); cout << char(219);
    gotoxy(43, 21); cout << char(219);
    gotoxy(79, 21); cout << char(219);
    gotoxy(43, 20); cout << char(219);
    gotoxy(79, 20); cout << char(219);
    gotoxy(43, 19); cout << char(219);
    gotoxy(79, 19); cout << char(219);

    gotoxy(44, 23); cout << char(92);
    gotoxy(80, 18); cout << char(92);
    for(int i = 45 ; i <=81 ; i++){
        gotoxy(i, 23); cout << char(95);
    }
    gotoxy(81, 19); cout << char(179);
    gotoxy(81, 20); cout << char(179);
    gotoxy(81, 21); cout << char(179);
    gotoxy(81, 22); cout << char(179);
    gotoxy(81, 23); cout << char(179);
}

void modalNuLL(){
    system("cls");
    Frames();

    gotoxy(59, 19); cout << "RONG";
    gotoxy(48, 20); cout << "Press any key to continue...";
    gotoxy(43, 17); cout << char(219);
    gotoxy(43, 22); cout << char(219);
    gotoxy(79, 17); cout << char(219);
    gotoxy(79, 22); cout << char(219);
    for(int i=44 ; i <= 78 ; i++){
        gotoxy(i, 17); cout << char(219);
    }
    for(int i=44 ; i <= 78 ; i++){
        gotoxy(i, 22); cout << char(219);
    }
    gotoxy(43, 18); cout << char(219);
    gotoxy(79, 18); cout << char(219);
    gotoxy(43, 21); cout << char(219);
    gotoxy(79, 21); cout << char(219);
    gotoxy(43, 20); cout << char(219);
    gotoxy(79, 20); cout << char(219);
    gotoxy(43, 19); cout << char(219);
    gotoxy(79, 19); cout << char(219);

    gotoxy(44, 23); cout << char(92);
    gotoxy(80, 18); cout << char(92);
    for(int i = 45 ; i <=81 ; i++){
        gotoxy(i, 23); cout << char(95);
    }
    gotoxy(81, 19); cout << char(179);
    gotoxy(81, 20); cout << char(179);
    gotoxy(81, 21); cout << char(179);
    gotoxy(81, 22); cout << char(179);
    gotoxy(81, 23); cout << char(179);
}

void FramesInput(){
// khung input
    gotoxy(45, 11); cout << char(218);
    
    gotoxy(76, 11); cout << char(191);

    gotoxy(45, 12); cout << char(179);
    gotoxy(76, 12); cout << char(179);

    gotoxy(45, 13); cout << char(192);
    for(int i=46 ; i < 76 ; i++){
        gotoxy(i, 13);
        cout << char(196);
    }
    gotoxy(76, 13); cout << char(217);
}
