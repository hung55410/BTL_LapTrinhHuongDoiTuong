#include <iostream>
#include <windows.h>

using namespace std;

void gt(SHORT posX, SHORT posY)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD Position;
    Position.X = posX;
    Position.Y = posY;

	SetConsoleCursorPosition(hStdout, Position);
}

void so0_1(){
	gt(2,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254);
	gt(2,3); cout << char(219) << "     " << char(219);
	gt(2,4); cout << char(219) << "     " << char(219);
	gt(2,5); cout << char(219) << "     " << char(219);
	gt(2,6); cout << char(219) << "     " << char(219);
	gt(2,7); cout << char(219) << "     " << char(219);
	gt(2,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254);
}

void so0_2(){
	gt(10,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(10,3); cout << char(219) << "     " << char(219) ;
	gt(10,4); cout << char(219) << "     " << char(219) ;
	gt(10,5); cout << char(219) << "     " << char(219) ;
	gt(10,6); cout << char(219) << "     " << char(219) ;
	gt(10,7); cout << char(219) << "     " << char(219) ;
	gt(10,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so0_3(){
	gt(22,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(22,3); cout << char(219) << "     " << char(219) ;
	gt(22,4); cout << char(219) << "     " << char(219) ;
	gt(22,5); cout << char(219) << "     " << char(219) ;
	gt(22,6); cout << char(219) << "     " << char(219) ;
	gt(22,7); cout << char(219) << "     " << char(219) ;
	gt(22,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so0_4(){
	gt(30,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(30,3); cout << char(219) << "     " << char(219) ;
	gt(30,4); cout << char(219) << "     " << char(219) ;
	gt(30,5); cout << char(219) << "     " << char(219) ;
	gt(30,6); cout << char(219) << "     " << char(219) ;
	gt(30,7); cout << char(219) << "     " << char(219) ;
	gt(30,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so0_5(){
	gt(42,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(42,3); cout << char(219) << "     " << char(219) ;
	gt(42,4); cout << char(219) << "     " << char(219) ;
	gt(42,5); cout << char(219) << "     " << char(219) ;
	gt(42,6); cout << char(219) << "     " << char(219) ;
	gt(42,7); cout << char(219) << "     " << char(219) ;
	gt(42,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so0_6(){
	gt(50,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(50,3); cout << char(219) << "     " << char(219) ;
	gt(50,4); cout << char(219) << "     " << char(219) ;
	gt(50,5); cout << char(219) << "     " << char(219) ;
	gt(50,6); cout << char(219) << "     " << char(219) ;
	gt(50,7); cout << char(219) << "     " << char(219) ;
	gt(50,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so1_1(){
	gt(2,2); cout << "      " << char(254) ;
	gt(2,3); cout << "      " << char(219) ;
	gt(2,4); cout << "      " << char(219) ;
	gt(2,5); cout << "      " << char(219) ;
	gt(2,6); cout << "      " << char(219) ;
	gt(2,7); cout << "      " << char(219) ;
	gt(2,8); cout << "      " << char(254) ;
}

void so1_2(){
	gt(10,2); cout << "      " << char(254) ;
	gt(10,3); cout << "      " << char(219) ;
	gt(10,4); cout << "      " << char(219) ;
	gt(10,5); cout << "      " << char(219) ;
	gt(10,6); cout << "      " << char(219) ;
	gt(10,7); cout << "      " << char(219) ;
	gt(10,8); cout << "      " << char(254) ;
}

void so1_3(){
	gt(22,2); cout << "      " << char(254) ;
	gt(22,3); cout << "      " << char(219) ;
	gt(22,4); cout << "      " << char(219) ;
	gt(22,5); cout << "      " << char(219) ;
	gt(22,6); cout << "      " << char(219) ;
	gt(22,7); cout << "      " << char(219) ;
	gt(22,8); cout << "      " << char(254) ;
}

void so1_4(){
	gt(30,2); cout << "      " << char(254) ;
	gt(30,3); cout << "      " << char(219) ;
	gt(30,4); cout << "      " << char(219) ;
	gt(30,5); cout << "      " << char(219) ;
	gt(30,6); cout << "      " << char(219) ;
	gt(30,7); cout << "      " << char(219) ;
	gt(30,8); cout << "      " << char(254) ;
}

void so1_5(){
	gt(42,2); cout << "      " << char(254) ;
	gt(42,3); cout << "      " << char(219) ;
	gt(42,4); cout << "      " << char(219) ;
	gt(42,5); cout << "      " << char(219) ;
	gt(42,6); cout << "      " << char(219) ;
	gt(42,7); cout << "      " << char(219) ;
	gt(42,8); cout << "      " << char(254) ;
}

void so1_6(){
	gt(50,2); cout << "      " << char(254) ;
	gt(50,3); cout << "      " << char(219) ;
	gt(50,4); cout << "      " << char(219) ;
	gt(50,5); cout << "      " << char(219) ;
	gt(50,6); cout << "      " << char(219) ;
	gt(50,7); cout << "      " << char(219) ;
	gt(50,8); cout << "      " << char(254) ;
}

void so2_1(){
	gt(2,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(2,3); cout << "      " << char(219) ;
	gt(2,4); cout << "      " << char(219) ;
	gt(2,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(2,6); cout << char(219) ;
	gt(2,7); cout << char(219) ;
	gt(2,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so2_2(){
	gt(10,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(10,3); cout << "      " << char(219) ;
	gt(10,4); cout << "      " << char(219) ;
	gt(10,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(10,6); cout << char(219) ;
	gt(10,7); cout << char(219) ;
	gt(10,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so2_3(){
	gt(22,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(22,3); cout << "      " << char(219) ;
	gt(22,4); cout << "      " << char(219) ;
	gt(22,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(22,6); cout << char(219) ;
	gt(22,7); cout << char(219) ;
	gt(22,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so2_4(){
	gt(30,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(30,3); cout << "      " << char(219) ;
	gt(30,4); cout << "      " << char(219) ;
	gt(30,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(30,6); cout << char(219) ;
	gt(30,7); cout << char(219) ;
	gt(30,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so2_5(){
	gt(42,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(42,3); cout << "      " << char(219) ;
	gt(42,4); cout << "      " << char(219) ;
	gt(42,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(42,6); cout << char(219) ;
	gt(42,7); cout << char(219) ;
	gt(42,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so2_6(){
	gt(50,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(50,3); cout << "      " << char(219) ;
	gt(50,4); cout << "      " << char(219) ;
	gt(50,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(50,6); cout << char(219) ;
	gt(50,7); cout << char(219) ;
	gt(50,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so3_1(){
	gt(2,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(2,3); cout << "      " << char(219) ;
	gt(2,4); cout << "      " << char(219) ;
	gt(2,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(2,6); cout << "      " << char(219) ;
	gt(2,7); cout << "      " << char(219) ;
	gt(2,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so3_2(){
	gt(10,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(10,3); cout << "      " << char(219) ;
	gt(10,4); cout << "      " << char(219) ;
	gt(10,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(10,6); cout << "      " << char(219) ;
	gt(10,7); cout << "      " << char(219) ;
	gt(10,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so3_3(){
	gt(22,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(22,3); cout << "      " << char(219) ;
	gt(22,4); cout << "      " << char(219) ;
	gt(22,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(22,6); cout << "      " << char(219) ;
	gt(22,7); cout << "      " << char(219) ;
	gt(22,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so3_4(){
	gt(30,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(30,3); cout << "      " << char(219) ;
	gt(30,4); cout << "      " << char(219) ;
	gt(30,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(30,6); cout << "      " << char(219) ;
	gt(30,7); cout << "      " << char(219) ;
	gt(30,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so3_5(){
	gt(42,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(42,3); cout << "      " << char(219) ;
	gt(42,4); cout << "      " << char(219) ;
	gt(42,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(42,6); cout << "      " << char(219) ;
	gt(42,7); cout << "      " << char(219) ;
	gt(42,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so3_6(){
	gt(50,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(50,3); cout << "      " << char(219) ;
	gt(50,4); cout << "      " << char(219) ;
	gt(50,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(50,6); cout << "      " << char(219) ;
	gt(50,7); cout << "      " << char(219) ;
	gt(50,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so4_1(){
	gt(2,2); cout << char(219) << "     " << char(219) ;
	gt(2,3); cout << char(219) << "     " << char(219) ;
	gt(2,4); cout << char(219) << "     " << char(219) ;
	gt(2,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(2,6); cout << "      " << char(219) ;
	gt(2,7); cout << "      " << char(219) ;
	gt(2,8); cout << "      " << char(219) ;
}

void so4_2(){
	gt(10,2); cout << char(219) << "     " << char(219) ;
	gt(10,3); cout << char(219) << "     " << char(219) ;
	gt(10,4); cout << char(219) << "     " << char(219) ;
	gt(10,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(10,6); cout << "      " << char(219) ;
	gt(10,7); cout << "      " << char(219) ;
	gt(10,8); cout << "      " << char(219) ;
}

void so4_3(){
	gt(22,2); cout << char(219) << "     " << char(219) ;
	gt(22,3); cout << char(219) << "     " << char(219) ;
	gt(22,4); cout << char(219) << "     " << char(219) ;
	gt(22,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(22,6); cout << "      " << char(219) ;
	gt(22,7); cout << "      " << char(219) ;
	gt(22,8); cout << "      " << char(219) ;
}

void so4_4(){
	gt(30,2); cout << char(219) << "     " << char(219) ;
	gt(30,3); cout << char(219) << "     " << char(219) ;
	gt(30,4); cout << char(219) << "     " << char(219) ;
	gt(30,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(30,6); cout << "      " << char(219) ;
	gt(30,7); cout << "      " << char(219) ;
	gt(30,8); cout << "      " << char(219) ;
}

void so4_5(){
	gt(42,2); cout << char(219) << "     " << char(219) ;
	gt(42,3); cout << char(219) << "     " << char(219) ;
	gt(42,4); cout << char(219) << "     " << char(219) ;
	gt(42,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(42,6); cout << "      " << char(219) ;
	gt(42,7); cout << "      " << char(219) ;
	gt(42,8); cout << "      " << char(219) ;
}

void so4_6(){
	gt(50,2); cout << char(219) << "     " << char(219) ;
	gt(50,3); cout << char(219) << "     " << char(219) ;
	gt(50,4); cout << char(219) << "     " << char(219) ;
	gt(50,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(50,6); cout << "      " << char(219) ;
	gt(50,7); cout << "      " << char(219) ;
	gt(50,8); cout << "      " << char(219) ;
}

void so5_1(){
	gt(2,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(2,3); cout << char(219) ;
	gt(2,4); cout << char(219) ;
	gt(2,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(2,6); cout << "      " << char(219) ;
	gt(2,7); cout << "      " << char(219) ;
	gt(2,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so5_2(){
	gt(10,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(10,3); cout << char(219) ;
	gt(10,4); cout << char(219) ;
	gt(10,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(10,6); cout << "      " << char(219) ;
	gt(10,7); cout << "      " << char(219) ;
	gt(10,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so5_3(){
	gt(22,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(22,3); cout << char(219) ;
	gt(22,4); cout << char(219) ;
	gt(22,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(22,6); cout << "      " << char(219) ;
	gt(22,7); cout << "      " << char(219) ;
	gt(22,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so5_4(){
	gt(30,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(30,3); cout << char(219) ;
	gt(30,4); cout << char(219) ;
	gt(30,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(30,6); cout << "      " << char(219) ;
	gt(30,7); cout << "      " << char(219) ;
	gt(30,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so5_5(){
	gt(42,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(42,3); cout << char(219) ;
	gt(42,4); cout << char(219) ;
	gt(42,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(42,6); cout << "      " << char(219) ;
	gt(42,7); cout << "      " << char(219) ;
	gt(42,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so5_6(){
	gt(50,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(50,3); cout << char(219) ;
	gt(50,4); cout << char(219) ;
	gt(50,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(50,6); cout << "      " << char(219) ;
	gt(50,7); cout << "      " << char(219) ;
	gt(50,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so6_1(){
	gt(2,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(2,3); cout << char(219) ;
	gt(2,4); cout << char(219) ;
	gt(2,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(2,6); cout << char(219) <<"     " << char(219) ;
	gt(2,7); cout << char(219) <<"     " << char(219) ;
	gt(2,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so6_2(){
	gt(10,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(10,3); cout << char(219) ;
	gt(10,4); cout << char(219) ;
	gt(10,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(10,6); cout << char(219) <<"     " << char(219) ;
	gt(10,7); cout << char(219) <<"     " << char(219) ;
	gt(10,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so6_3(){
	gt(22,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(22,3); cout << char(219) ;
	gt(22,4); cout << char(219) ;
	gt(22,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(22,6); cout << char(219) <<"     " << char(219) ;
	gt(22,7); cout << char(219) <<"     " << char(219) ;
	gt(22,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so6_4(){
	gt(30,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(30,3); cout << char(219) ;
	gt(30,4); cout << char(219) ;
	gt(30,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(30,6); cout << char(219) <<"     " << char(219) ;
	gt(30,7); cout << char(219) <<"     " << char(219) ;
	gt(30,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so6_5(){
	gt(42,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(42,3); cout << char(219) ;
	gt(42,4); cout << char(219) ;
	gt(42,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(42,6); cout << char(219) <<"     " << char(219) ;
	gt(42,7); cout << char(219) <<"     " << char(219) ;
	gt(42,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so6_6(){
	gt(50,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(50,3); cout << char(219) ;
	gt(50,4); cout << char(219) ;
	gt(50,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(50,6); cout << char(219) <<"     " << char(219) ;
	gt(50,7); cout << char(219) <<"     " << char(219) ;
	gt(50,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so7_1(){
	gt(2,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(2,3); cout << "      " << char(219) ;
	gt(2,4); cout << "      " << char(219) ;
	gt(2,5); cout << "  " << char(254) << char(254) << char(254) << char(254) << char(219) ;
	gt(2,6); cout << "      " << char(219) ;
	gt(2,7); cout << "      " << char(219) ;
	gt(2,8); cout << "      " << char(219) ;
}

void so7_2(){
	gt(10,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(10,3); cout << "      " << char(219) ;
	gt(10,4); cout << "      " << char(219) ;
	gt(10,5); cout << "  " << char(254) << char(254) << char(254) << char(254) << char(219) ;
	gt(10,6); cout << "      " << char(219) ;
	gt(10,7); cout << "      " << char(219) ;
	gt(10,8); cout << "      " << char(219) ;
}

void so7_3(){
	gt(22,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(22,3); cout << "      " << char(219) ;
	gt(22,4); cout << "      " << char(219) ;
	gt(22,5); cout << "  " << char(254) << char(254) << char(254) << char(254) << char(219) ;
	gt(22,6); cout << "      " << char(219) ;
	gt(22,7); cout << "      " << char(219) ;
	gt(22,8); cout << "      " << char(219) ;
}

void so7_4(){
	gt(30,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(30,3); cout << "      " << char(219) ;
	gt(30,4); cout << "      " << char(219) ;
	gt(30,5); cout << "  " << char(254) << char(254) << char(254) << char(254) << char(219) ;
	gt(30,6); cout << "      " << char(219) ;
	gt(30,7); cout << "      " << char(219) ;
	gt(30,8); cout << "      " << char(219) ;
}

void so7_5(){
	gt(42,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(42,3); cout << "      " << char(219) ;
	gt(42,4); cout << "      " << char(219) ;
	gt(42,5); cout << "  " << char(254) << char(254) << char(254) << char(254) << char(219) ;
	gt(42,6); cout << "      " << char(219) ;
	gt(42,7); cout << "      " << char(219) ;
	gt(42,8); cout << "      " << char(219) ;
}

void so7_6(){
	gt(50,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(50,3); cout << "      " << char(219) ;
	gt(50,4); cout << "      " << char(219) ;
	gt(50,5); cout << "  " << char(254) << char(254) << char(254) << char(254) << char(219) ;
	gt(50,6); cout << "      " << char(219) ;
	gt(50,7); cout << "      " << char(219) ;
	gt(50,8); cout << "      " << char(219) ;
}

void so8_1(){
	gt(2,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(2,3); cout << char(219) << "     " << char(219) ;
	gt(2,4); cout << char(219) << "     " << char(219) ;
	gt(2,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(2,6); cout << char(219) << "     " << char(219) ;
	gt(2,7); cout << char(219) << "     " << char(219) ;
	gt(2,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so8_2(){
	gt(10,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(10,3); cout << char(219) << "     " << char(219) ;
	gt(10,4); cout << char(219) << "     " << char(219) ;
	gt(10,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(10,6); cout << char(219) << "     " << char(219) ;
	gt(10,7); cout << char(219) << "     " << char(219) ;
	gt(10,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so8_3(){
	gt(22,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(22,3); cout << char(219) << "     " << char(219) ;
	gt(22,4); cout << char(219) << "     " << char(219) ;
	gt(22,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(22,6); cout << char(219) << "     " << char(219) ;
	gt(22,7); cout << char(219) << "     " << char(219) ;
	gt(22,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so8_4(){
	gt(30,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(30,3); cout << char(219) << "     " << char(219) ;
	gt(30,4); cout << char(219) << "     " << char(219) ;
	gt(30,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(30,6); cout << char(219) << "     " << char(219) ;
	gt(30,7); cout << char(219) << "     " << char(219) ;
	gt(30,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so8_5(){
	gt(42,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(42,3); cout << char(219) << "     " << char(219) ;
	gt(42,4); cout << char(219) << "     " << char(219) ;
	gt(42,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(42,6); cout << char(219) << "     " << char(219) ;
	gt(42,7); cout << char(219) << "     " << char(219) ;
	gt(42,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so8_6(){
	gt(50,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(50,3); cout << char(219) << "     " << char(219) ;
	gt(50,4); cout << char(219) << "     " << char(219) ;
	gt(50,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(50,6); cout << char(219) << "     " << char(219) ;
	gt(50,7); cout << char(219) << "     " << char(219) ;
	gt(50,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so9_1(){
	gt(2,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(2,3); cout << char(219) <<"     " << char(219) ;
	gt(2,4); cout << char(219) <<"     " << char(219) ;
	gt(2,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(2,6); cout << "      " <<char(219) ;
	gt(2,7); cout << "      " <<char(219) ;
	gt(2,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so9_2(){
	gt(10,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(10,3); cout << char(219) <<"     " << char(219) ;
	gt(10,4); cout << char(219) <<"     " << char(219) ;
	gt(10,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(10,6); cout << "      " <<char(219) ;
	gt(10,7); cout << "      " <<char(219) ;
	gt(10,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so9_3(){
	gt(22,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(22,3); cout << char(219) <<"     " << char(219) ;
	gt(22,4); cout << char(219) <<"     " << char(219) ;
	gt(22,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(22,6); cout << "      " <<char(219) ;
	gt(22,7); cout << "      " <<char(219) ;
	gt(22,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so9_4(){
	gt(30,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(30,3); cout << char(219) <<"     " << char(219) ;
	gt(30,4); cout << char(219) <<"     " << char(219) ;
	gt(30,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(30,6); cout << "      " <<char(219) ;
	gt(30,7); cout << "      " <<char(219) ;
	gt(30,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so9_5(){
	gt(42,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(42,3); cout << char(219) <<"     " << char(219) ;
	gt(42,4); cout << char(219) <<"     " << char(219) ;
	gt(42,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(42,6); cout << "      " <<char(219) ;
	gt(42,7); cout << "      " <<char(219) ;
	gt(42,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void so9_6(){
	gt(50,2); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(50,3); cout << char(219) <<"     " << char(219) ;
	gt(50,4); cout << char(219) <<"     " << char(219) ;
	gt(50,5); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
	gt(50,6); cout << "      " <<char(219) ;
	gt(50,7); cout << "      " <<char(219) ;
	gt(50,8); cout << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) << char(254) ;
}

void dauHaiCham_1(){
	gt(19,4); cout << char(254);
	gt(19,6); cout << char(254);
}

void dauHaiCham_2(){
	gt(39,4); cout << char(254);
	gt(39,6); cout << char(254);
}

int main(){
//	so0_1();
//	so0_2();
//	dauHaiCham_1();
//	so0_3();
//	so0_4();
//	dauHaiCham_2();
//	so0_5();
//	so0_6();
	
//	so1_1();
//	so1_2();
//	dauHaiCham_1();
//	so1_3();
//	so1_4();
//	dauHaiCham_2();
//	so1_5();
//	so1_6();

//	so2_1();
//	so2_2();
//	dauHaiCham_1();
//	so2_3();
//	so2_4();
//	dauHaiCham_2();
//	so2_5();
//	so2_6();

//	so3_1();
//	so3_2();
//	dauHaiCham_1();
//	so3_3();
//	so3_4();
//	dauHaiCham_2();
//	so3_5();
//	so3_6();
	
//	so4_1();
//	so4_2();
//	dauHaiCham_1();
//	so4_3();
//	so4_4();
//	dauHaiCham_2();
//	so4_5();
//	so4_6();

	so5_1();
	so5_2();
	dauHaiCham_1();
	so5_3();
	so5_4();
	dauHaiCham_2();
	so5_5();
	so5_6();

//	so6_1();
//	so6_2();
//	dauHaiCham_1();
//	so6_3();
//	so6_4();
//	dauHaiCham_2();
//	so6_5();
//	so6_6();
	
//	so7_1();
//	so7_2();
//	dauHaiCham_1();
//	so7_3();
//	so7_4();
//	dauHaiCham_2();
//	so7_5();
//	so7_6();

//	so8_1();
//	so8_2();
//	dauHaiCham_1();
//	so8_3();
//	so8_4();
//	dauHaiCham_2();
//	so8_5();
//	so8_6();

//	so9_1();
//	so9_2();
//	dauHaiCham_1();
//	so9_3();
//	so9_4();
//	dauHaiCham_2();
//	so9_5();
//	so9_6();
	
	getchar();
}
