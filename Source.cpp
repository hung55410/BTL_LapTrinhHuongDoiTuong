#include<iostream>
#include<conio.h>
#include <stdlib.h>

using namespace std;

void case1() {
	system("cls");
	cout << "1111";
}
void case2() {
	system("cls");
	cout << " 2222";
}
//void case3() {
//	system("cls");
//	exit(0);
//}
void menu() {
    
    int cn=1;

    
    do {
        system("cls");
        if (cn == 1)cout << "++"; cout << "case 1" << endl;
            
        
        if (cn == 2)cout << "++"; cout << "case 2" << endl;
        cout << "ESC to exit" << endl;
        cout << "Chon " << cn;
        //cout << "case 3" << endl;



        int t = _getch();
        cout << t;
        if (t == 13)
        {
            // nhan enter
            switch (cn)
            {
            case 1:
            {
                
                case1();
                _getch();
                break;

            }
            case 2:
            {
                
                
                case2();
                _getch();
                break;
            }
            
            }
        }
        else if (t == 27)
        {
            exit(0);
        }
        else if (t == 80)
        {
            cn++;
        }
        else if (t == 72)
        {
            cn--;
        }
         if (cn > 2)
        {
             /*system("cls");
             cout << "++case 1" << endl;
             cout << "case 2" << endl;*/
             cn = 1;
        }
        else if (cn < 1)
        {
             /*system("cls");
             cout << "case 1" << endl;
             cout << "++case 2" << endl;*/
             cn = 2;
        }
    }
    while (1);
    
}
int main() {
    
        menu();
    
    return 0;
}