#include <iostream>
#include <ctime>

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

        void xacDinhThuTrongTuan();

        void menuNgayLe();
        void ListMenuNgayLe();
};
// tính đa hình
class HolidayInMonth : public DateTime{
    public:
        void xemNgayLeTrongThang(){
            Frames();

            FramesInput();

            DateTime date;
            gotoxy(54, 12);
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
};

void DateTime::thoiGianHienTai(){
    DateTime time;
    Frames();
    gotoxy(45, 19);
    cout << "Hom nay la ngay: ";
    cout << day << "/" << month << "/" << year << ", ";
    time.xacDinhThuTrongTuan();
    gotoxy(52, 21);
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
        gotoxy(55, 23);
        cout << "Mot ngay moi tot lanh!!!" << endl;
    }
    else if(hour < 15){
        gotoxy(55, 23);
        cout << "Chao buoi trua" << endl;
    }
    else{
        gotoxy(55, 23);
        cout << "Buoi toi vui ve" << endl;
    }
}

void DateTime::ngayLeTrongThang1(){
    lineHoliday();
    gotoxy(50, 14);
    cout << "NGAY LE TRONG THANG 1";
    gotoxy(49, 17);
    cout << "Ngay 1/1: Tet duong lich";
}

void DateTime::ngayLeTrongThang2(){
    lineHoliday();
    gotoxy(50, 14);
    cout << "NGAY LE TRONG THANG 2";
    gotoxy(52, 17);
    cout << "Ngay 14/2: Valentine";
    gotoxy(44, 19);
    cout << "Ngay 27/2: Ngay thay thuoc Viet Nam";
}

void DateTime::ngayLeTrongThang3(){
    lineHoliday();
    gotoxy(50, 14);
    cout << "NGAY LE TRONG THANG 3";
    gotoxy(47, 17);
    cout << "Ngay 8/3: Ngay Quoc te Phu nu";
    gotoxy(45, 19);
    cout << "Ngay 20/3: Ngay Quoc te hanh phuc";
    gotoxy(38, 21);
    cout << "Ngay 26/3: Ngay thanh lap Doan TNCS Ho Chi Minh";
}

void DateTime::ngayLeTrongThang4(){
    lineHoliday();
    gotoxy(50, 14);
    cout << "NGAY LE TRONG THANG 4";
    gotoxy(49, 17);
    cout << "Ngay 1/4: Ngay ca thang 4";
    gotoxy(44, 19);
    cout << "Ngay 30/4: Ngay giai phong mien Nam";
}

void DateTime::ngayLeTrongThang5(){
    lineHoliday();
    gotoxy(50, 14);
    cout << "NGAY LE TRONG THANG 5";
    gotoxy(45, 17);
    cout << "Ngay 1/5: Ngay Quoc te lao dong";
    gotoxy(44, 19);
    cout << "Ngay 7/5: Chien thang Dien Bien Phu";
    gotoxy(50, 21);
    cout << "Ngay 13/5: Ngay cua me";
    gotoxy(41, 23);
    cout << "Ngay 19/5: Ngay sinh Chu tich Ho Chi Minh";
}

void DateTime::ngayLeTrongThang6(){
    lineHoliday();
    gotoxy(50, 14);
    cout << "NGAY LE TRONG THANG 6";
    gotoxy(45, 17);
    cout << "Ngay 1/6: Ngay Quoc te thieu nhi";
    gotoxy(49, 19);
    cout << "Ngay 17/6: Ngay cua cha";
    gotoxy(45, 21);
    cout << "Ngay 21/6: Ngay bao chi Viet Nam";
    gotoxy(44, 23);
    cout << "Ngay 28/6: Ngay gia dinh Viet Nam";
}

void DateTime::ngayLeTrongThang7(){
    lineHoliday();
    gotoxy(50, 14);
    cout << "NGAY LE TRONG THANG 7";
    gotoxy(45, 17);
    cout << "Ngay 11/7: Ngay dan so the gioi";
    gotoxy(43, 19);
    cout << "Ngay 27/7: Ngay thuong binh liet si";
    gotoxy(40, 21);
    cout << "Ngay 28/7: Ngay thanh lap cong doan Viet Nam";
}

void DateTime::ngayLeTrongThang8(){
    lineHoliday();
    gotoxy(50, 14);
    cout << "NGAY LE TRONG THANG 8";
    gotoxy(45, 17);
    cout << "Ngay 19/8: Ngay tong khoi nghia";
}

void DateTime::ngayLeTrongThang9(){
    lineHoliday();
    gotoxy(50, 14);
    cout << "NGAY LE TRONG THANG 9";
    gotoxy(46, 17);
    cout << "Ngay 2/9: Quoc Khanh Viet Nam";
    gotoxy(36, 19);
    cout << "Ngay 10/9: Ngay thanh lap mat tran to quoc Viet Nam";
}

void DateTime::ngayLeTrongThang10(){
    lineHoliday();
    gotoxy(49, 14);
    cout << "NGAY LE TRONG THANG 10";
    gotoxy(43, 17);
    cout << "Ngay 1/10: Ngay Quoc te nguoi cao tuoi";
    gotoxy(44, 19);
    cout << "Ngay 10/10: Ngay giai phong Thu Do";
    gotoxy(43, 21);
    cout << "Ngay 13/10: Ngay danh nhan Viet Nam";
    gotoxy(45, 23);
    cout << "Ngay 20/10: Ngay Phu nu Viet Nam";
    gotoxy(50, 25);
    cout << "Ngay 31/10: Halloween";
}

void DateTime::ngayLeTrongThang11(){
    lineHoliday();
    gotoxy(50, 14);
    cout << "NGAY LE TRONG THANG 11";
    gotoxy(44, 17);
    cout << "Ngay 9/11: Ngay Phap luat Viet Nam";
    gotoxy(45, 19);
    cout << "Ngay 19/11: Ngay Quoc te Nam gioi";
    gotoxy(44, 21);
    cout << "Ngay 20/11: Ngay Nha giao Viet Nam";
    gotoxy(37, 23);
    cout << "Ngay 23/11: Ngay thanh lap Hoi chu thap do Viet Nam";
}

void DateTime::ngayLeTrongThang12(){
    lineHoliday();
    gotoxy(50, 14);
    cout << "NGAY LE TRONG THANG 12";
    gotoxy(41, 17);
    cout << "Ngay 1/12: Ngay the gioi phong chong AIDS";
    gotoxy(42, 19);
    cout << "Ngay 19/12: Ngay toan quoc khang chien";
    gotoxy(48, 21);
    cout << "Ngay 24/12: Le Giang Sinh";
    gotoxy(37, 23);
    cout << "Ngay 22/12: Ngay thanh lap quan doi nhan dan Viet Nam";
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
   	HolidayInMonth Hm;
    int cn=1;
	int a=1;
	
    do {
        system("cls");
        Frames();
		if (cn == 1){
            gotoxy(47, 17); cout << char(175) << char(175);
            gotoxy(73, 17); cout << char(174) << char(174);
        }
        gotoxy(50, 17);
        cout << "Xem thoi gian hien tai" << endl;
            
        if (cn == 2){
            gotoxy(42, 19); cout << char(175) << char(175);
            gotoxy(79, 19); cout << char(174) << char(174);
        }
        gotoxy(45, 19);
        cout << "Xem thoi gian ngay le trong thang" << endl;

        if (cn == 3){
            gotoxy(55, 21); cout << char(175) << char(175);
            gotoxy(65, 21); cout << char(174) << char(174);
        }
        gotoxy(58, 21);
		cout << "Tro ve" << endl;

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
                    gotoxy(64, 29);
                    cout << "Nhan phim bat ki de tro ve!!!";
                    getch();
                    break;
                }
            case 2:
                {
                    system("cls");
                    Hm.xemNgayLeTrongThang();
                    gotoxy(64, 29);
                    cout << "Nhan phim bat ki de tro ve!!!";
                    getch();
                    break;
                }
            case 3:
                {
                    system("cls");
                    a=0;
                    break;
                }
            
            }
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
