#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;


void Demgio(){
	int second=0, munite=0, hour=0;
	for(second =0; second<60; second++){
		if(second ==59){
			second=0;
			munite++;
		}
		if(munite == 59 && second == 59){
			hour ++;
			second=0;
			munite=0;
		}
		cout << hour << " : " << munite << " : " << second;
		Sleep(1000);
		system("cls");
	}
}

void Bamgio(){
	int second=0, munite=0, hour=0;
	cout << "\nNhap vao so phut: ";
	cin >> munite;
	hour=munite/60;
	for(second=59 ; second >=0 ; second--){
		if(second ==0 && munite-1 ==0){
			break;
		}
		if(second==0){
			munite--;
			second=59;
		}
		cout << hour << " : " << munite-1 << " : " << second;
		Sleep(10);
		system("cls");
	}
}

int main (){
//	Demgio();
	Bamgio();
	return 0;
}
