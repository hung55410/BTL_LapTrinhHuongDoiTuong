#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

class DongHo{
	private:
		int hour , munite, second;
	public:
		void boDemGio ();
		void playSecond ();
		void playMunite ();
		void playhour ();
};

void DongHo::boDemGio(){
	for(second=0; ; second++){
		if(second == 59){
			second = 0;
			munite++;
		}
		if(munite == 59){
			munite = 0;
			hour++;
		}
		
		cout << hour << " : " << munite << " : " << second ;
		Sleep(1000);
		system("cls");
	}
}

void DongHo::playSecond() {
	for (int i=60 ; i > 0 ; i--) {
		cout << i << " ";
		
		Sleep(1000);
		system("cls");
	}
}

void DongHo::playMunite() {
	
}

int main (){
	DongHo clock;
	int selection;
	
	clock.boDemGio();
//	clock.playSecond();
	return 0;
}
