// #include <iostream>
#include <ctime>
// #include <cstdlib>
// #include <string>
// #include <conio.h>
// #include <math.h>
// #include <windows.h>
// #include "event.h"
#include "giaodien.h"

using namespace std;

class DateTime{
    private:
        int day;
        int month;
        int year;
        int hour;
        int minute;
        int second;
        
        int ngayDaQua=0;
        int thangDaQua=0;

        int timThang;
    public:
        DateTime(){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            day = ltm->tm_mday;
            month = 1 + ltm->tm_mon;
            year = 1900 + ltm->tm_year;
            hour = ltm->tm_hour;
            minute = ltm->tm_min;
            second = ltm->tm_sec;
        }
        void thoiGianHienTai();
        void ngayLeTrongThang1();
        void ngayLeTrongThang2();
        void ngayLeTrongThang3();
        void ngayLeTrongThang4();
        void ngayLeTrongThang5();
        void ngayLeTrongThang6();
        void ngayLeTrongThang7();
        void ngayLeTrongThang8();
        void ngayLeTrongThang9();
        void ngayLeTrongThang10();
        void ngayLeTrongThang11();
        void ngayLeTrongThang12();
        void xemNgayLeTrongThang();
        void xemNgayLeTrongNam();

        void xacDinhThuTrongTuan();

        void menuNgayLe();
        void ListMenuNgayLe();
};

void DateTime::thoiGianHienTai(){
    DateTime time;
    cout << "Hom nay la ngay: ";
    cout << day << "/" << month << "/" << year << ", ";
    time.xacDinhThuTrongTuan();
    cout << "Bay gio la: ";

    if(hour < 10){
        cout << "0" << hour << ":";
    }
    else{
        cout << hour << ":";
    }
    if(minute < 10){
        cout << "0" << minute << ":";
    }
    else{
        cout << minute << ":";
    }
    if(second < 10){
        cout << "0" << second << endl;
    }
    else{
        cout << second << endl;
    }

    if(hour < 12){
        cout << "Mot ngay moi tot lanh!!!" << endl;
    }
    else if(hour < 18){
        cout << "Chao buoi trua" << endl;
    }
    else{
        cout << "Buoi toi vui ve" << endl;
    }
}

void DateTime::ngayLeTrongThang1(){
    cout << "Ngay le trong thang 1: " << endl;
    cout << "\tNgay 1/1: Tet duong lich" << endl;
}

void DateTime::ngayLeTrongThang2(){
    cout << "Ngay le trong thang 2: " << endl;
    cout << "\tNgay 14/2: Valentine" << endl;
    cout << "\tNgay 27/2: Ngay thay thuoc Viet Nam" << endl;
}

void DateTime::ngayLeTrongThang3(){
    cout << "Ngay le trong thang 3: " << endl;
    cout << "\tNgay 8/3: Ngay Quoc te Phu nu" << endl;
    cout << "\tNgay 20/3: Ngay Quoc te hanh phuc" << endl;
    cout << "\tNgay 26/3: Ngay thanh lap Doan TNCS Ho Chi Minh" << endl;
}

void DateTime::ngayLeTrongThang4(){
    cout << "Ngay le trong thang 4: " << endl;
    cout << "\tNgay 1/4: Ngay ca thang 4" << endl;
    cout << "\tNgay 30/4: Ngay giai phong mien Nam" << endl;
}

void DateTime::ngayLeTrongThang5(){
    cout << "Ngay le trong thang 5: " << endl;
    cout << "\tNgay 1/5: Ngay Quoc te lao dong" << endl;
    cout << "\tNgay 7/5: Chien thang Dien Bien Phu" << endl;
    cout << "\tNgay 13/5: Ngay cua me" << endl;
    cout << "\tNgay 19/5: Ngay sinh Chu tich Ho Chi Minh" << endl;
}

void DateTime::ngayLeTrongThang6(){
    cout << "Ngay le trong thang 6: " << endl;
    cout << "\tNgay 1/6: Ngay Quoc te thieu nhi"  << endl;
    cout << "\tNgay 17/6: Ngay cua cha" << endl;
    cout << "\tNgay 21/6: Ngay bao chi Viet Nam" << endl;
    cout << "\tNgay 28/6: Ngay gia dinh Viet Nam" << endl;
}

void DateTime::ngayLeTrongThang7(){
    cout << "Ngay le trong thang 7: " << endl;
    cout << "\tNgay 11/7: Ngay dan so the gioi" << endl;
    cout << "\tNgay 27/7: Ngay thuong binh liet si" << endl;
    cout << "\tNgay 28/7: Ngay thanh lap cong doan Viet Nam" << endl;
}

void DateTime::ngayLeTrongThang8(){
    cout << "Ngay le trong thang 8: " << endl;
    cout << "\tNgay 19/8: Ngay tong khoi nghia" << endl;
}

void DateTime::ngayLeTrongThang9(){
    cout << "Ngay le trong thang 9: " << endl;
    cout << "\tNgay 2/9: Quoc Khanh Viet Nam" << endl;
    cout << "\tNgay 10/9: Ngay thanh lap mat tran to quoc Viet Nam" << endl;
}

void DateTime::ngayLeTrongThang10(){
    cout << "Ngay le trong thang 10: " << endl;
    cout << "\tNgay 1/10: Ngay Quoc te nguoi cao tuoi" << endl;
    cout << "\tNgay 10/10: Ngay giai phong Thu Do" << endl;
    cout << "\tNgay 13/10: Ngay danh nhan Viet Nam" << endl;
    cout << "\tNgay 20/10: Ngay Phu nu Viet Nam" << endl;
    cout << "\tNgay 31/10: Halloween" << endl;
}

void DateTime::ngayLeTrongThang11(){
    cout << "Ngay le trong thang 11: " << endl;
    cout << "\tNgay 9/11: Ngay Phap luat Viet Nam" << endl;
    cout << "\tNgay 19/11: Ngay Quoc te Nam gioi" << endl;
    cout << "\tNgay 20/11: Ngay Nha giao Viet Nam" << endl;
    cout << "\tNgay 23/11: Ngay thanh lap Hoi chu thap do Viet Nam" << endl;
}

void DateTime::ngayLeTrongThang12(){
    cout << "Ngay le trong thang 12: " << endl;
    cout << "\tNgay 1/12: Ngay the gioi phong chong AIDS" << endl;
    cout << "\tNgay 19/12: Ngay toan quoc khang chien" << endl;
    cout << "\tNgay 24/12: Le Giang Sinh" << endl;
    cout << "\tNgay 22/12: Ngay thanh lap quan doi nhan dan Viet Nam" << endl;
}

void DateTime::xemNgayLeTrongThang(){
    DateTime date;
    cout << "Nhap thang: ";
    int thang;
    cin >> thang;
    switch(thang){
        case 1:
            date.ngayLeTrongThang1();
            break;
        case 2:
            date.ngayLeTrongThang2();
            break;
        case 3:
            date.ngayLeTrongThang3();
            break;
        case 4:
            date.ngayLeTrongThang4();
            break;
        case 5:
            date.ngayLeTrongThang5();
            break;
        case 6: 
            date.ngayLeTrongThang6();
            break;
        case 7:
            date.ngayLeTrongThang7();
            break;
        case 8:
            date.ngayLeTrongThang8();
            break;
        case 9:
            date.ngayLeTrongThang9();
            break;
        case 10:
            date.ngayLeTrongThang10();
            break;
        case 11:
            date.ngayLeTrongThang11();
            break;
        case 12:
            date.ngayLeTrongThang12();
            break;
        default:
            cout << "Khong co thang nay" << endl;
            break;
    }
}

void DateTime::xemNgayLeTrongNam(){
    DateTime date;
    cout << "Toan bo ngay le trong nam: " << endl;
    date.ngayLeTrongThang1();
    date.ngayLeTrongThang2();
    date.ngayLeTrongThang3();
    date.ngayLeTrongThang4();
    date.ngayLeTrongThang5();
    date.ngayLeTrongThang6();
    date.ngayLeTrongThang7();
    date.ngayLeTrongThang8();
    date.ngayLeTrongThang9();
    date.ngayLeTrongThang10();
    date.ngayLeTrongThang11();
    date.ngayLeTrongThang12();
}

void DateTime::xacDinhThuTrongTuan(){
    // công thữc zeller
    int a;
    int y;
    int m;
    int DayOfWeek;

    a= (14-month)/12;
    y= year-a;
    m= month+12*a-2;
    DayOfWeek= (day+y+y/4-y/100+y/400+31*m/12)%7;

   if(DayOfWeek == 0){
       cout << "Chu Nhat" << endl;
   }
   else if(DayOfWeek == 1){
       cout << "Thu 2" << endl;
   }
   else if(DayOfWeek == 2){
       cout << "Thu 3" << endl;
   }
   else if(DayOfWeek == 3){
       cout << "Thu 4" << endl;
   }
   else if(DayOfWeek == 4){
       cout << "Thu 5" << endl;
   }
   else if(DayOfWeek == 5){
       cout << "Thu 6" << endl;
   }
   else if(DayOfWeek == 6){
       cout << "Thu 7" << endl;
   }
}

void DateTime::ListMenuNgayLe() {
    
   DateTime time;
   //time.menuNgayLe();
    int cn=1;
	int a=1;
	
    
    do {
        system("cls");
        gotoxy(50,15);
		if (cn == 1)cout << "==>"; cout << "Xem thoi gian hien tai" << endl;
            
        gotoxy(50,16);
        if (cn == 2)cout << "==>"; cout << "Xem thoi gian ngay le trong thang" << endl;
        gotoxy(50,17);
        if (cn == 3)cout << "==>"; cout << "Xem thoi gian ngay le trong nam" << endl;
        gotoxy(50,18);
		cout << "Nhan ESC de tro ve menu chinh" << endl;
        


        int t = _getch();
        
        if (t == 13)
        {
            // nhan enter
            switch (cn)
            {
            case 1:
                {
                    system("cls");
                    time.thoiGianHienTai();
                    cout << "Nhan phim bat ki de tro ve!!!";
                    getch();
                    break;
                }
            case 2:
                {
                    system("cls");
                    time.xemNgayLeTrongThang();
                    cout << "Nhan phim bat ki de tro ve!!!";
                    getch();
                    break;
                }
            case 3:
                {
                    system("cls");
                    time.xemNgayLeTrongNam();
                    cout << "Nhan phim bat ki de tro ve!!!";
                    getch();
                    break;
                }

            
            }
        }
        else if (t == 27)//nhan esc
        {
            a=0;
        }
        else if (t == 80)//nhan mui ten xuong
        {
            cn++;
        }
        else if (t == 72)//nhan mui ten len
        {
            cn--;
        }
         if (cn > 3)
        {
             
             cn = 1;
        }
        else if (cn < 1)
        {
             
             cn = 3;
        }
    }
    while (a);
    
}


