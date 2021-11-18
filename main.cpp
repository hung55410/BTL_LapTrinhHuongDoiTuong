#include <iostream>
#include <ctime>
#include <math.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <fstream>
#include <vector>
#include <stdio.h>
#include "ngayLe.h"

using namespace std;

// Tạo cấu trúc Event
struct Event
{
    string TieuDe;
    int ngay, thang, nam;
    int gio, phut;
    string NoiDung;
};

// Tạo cấu trúc Node
struct Node
{
    Event *data;
    Node *pNext;
};

// Tạo cấu trúc danh sách LK đơn
struct SingleList
{
    Node *pHead;
};

// Khởi tạo danh sách LK đơn
void Initialize(SingleList *&list)
{
    list=new SingleList;
    list->pHead=NULL;
}

// Cài đặt tháng
void inputMonth(Event &ev) {
    while (ev.thang < 1 || ev.thang > 12) {
        gotoxy(54, 18); cout << "   ";
        gotoxy(58, 18); cout << "x";
        gotoxy(42, 18); cout << "Nhap thang: ";
        cin >> ev.thang;
    }
    if(ev.thang == 1 || ev.thang == 3 || ev.thang == 5 || ev.thang == 7 || ev.thang == 8 || ev.thang == 10 || ev.thang == 12) {
        gotoxy(58, 18); cout << " ";
        lineDay();
        gotoxy(43, 20); cout << "Nhap ngay: ";
        cin >> ev.ngay;
        while (ev.ngay < 1 || ev.ngay > 31) {
            gotoxy(54, 20); cout << "   ";
            gotoxy(58, 20); cout << "x";
            gotoxy(43, 20); cout << "Nhap ngay: ";
            cin >> ev.ngay;
        }
    } else if(ev.thang == 4 || ev.thang == 6 || ev.thang == 9 || ev.thang == 11) {
        gotoxy(43, 20); cout << "Nhap ngay: ";
        cin >> ev.ngay;
        while (ev.ngay < 1 || ev.ngay > 50) {
            gotoxy(54, 20); cout << "   ";
            gotoxy(58, 20); cout << "x";
            gotoxy(43, 20); cout << "Nhap ngay: ";
            cin >> ev.ngay;
        }
    }
}

// Cài đặt năm
void settingDay(Event &ev) {
    lineYear();
    gotoxy(44, 16); cout << "Nhap nam: ";
    cin >> ev.nam;
    if(ev.nam % 4 == 0 || ev.nam % 400 == 0) {
        gotoxy(61, 16); cout << "Nam nhuan";
        lineMonth();
        gotoxy(42, 18); cout << "Nhap thang: ";
        cin >> ev.thang;
        if(ev.thang == 2) {
            lineDay();
            gotoxy(43, 20); cout << "Nhap ngay: ";
            cin >> ev.ngay;
            do{
                if(ev.ngay < 1 || ev.ngay > 29) {
                    gotoxy(54, 20); cout << "   ";
                    gotoxy(58, 20); cout << "x";
                    gotoxy(43, 20); cout << "Nhap ngay: ";
                    cin >> ev.ngay;
                }
            } while (ev.ngay < 1 || ev.ngay > 29);

        } else {
            inputMonth(ev);
        }
    } else {
        gotoxy(61, 16); cout << " Nam khong nhuan";
        lineMonth();
        gotoxy(42, 18); cout << "Nhap thang: ";
        cin >> ev.thang;
        if(ev.thang == 2) {
            gotoxy(43, 20); cout << "Nhap ngay: ";
            cin >> ev.ngay;
            do{
                if(ev.ngay < 1 || ev.ngay > 28) {
                    gotoxy(54, 20); cout << "    ";
                    gotoxy(58, 20); cout << "x";
                    gotoxy(43, 20); cout << "Nhap ngay: ";
                    cin >> ev.ngay;
                }
            } while (ev.ngay < 1 || ev.ngay > 28);
        } else {
            inputMonth(ev);
        }
    }
}

// Cài đặt giờ
void settingHour(Event &ev) {
    lineHour();
    gotoxy(58, 20); cout << " ";
    gotoxy(44, 22); cout << "Nhap gio: ";
    cin >> ev.gio;
    do{
        if(ev.gio < 0 || ev.gio > 23) {
            gotoxy(54, 22); cout << "   ";
            gotoxy(58, 22); cout << "x";
            gotoxy(44, 22); cout << "Nhap gio: ";
            cin >> ev.gio;
        }
    } while (ev.gio < 0 || ev.gio > 23);
    do{
        lineMinute();
        gotoxy(58, 22); cout << " ";
        gotoxy(43, 24); cout << "Nhap phut: ";
        cin >> ev.phut;
        if(ev.phut < 0 || ev.phut > 59) {
            gotoxy(54, 24); cout << "   ";
            gotoxy(58, 24); cout << "x";
            gotoxy(43, 24); cout << "Nhap phut: ";
            cin >> ev.phut;
        }
    } while (ev.phut < 0 || ev.phut >= 60);
}

// Tạo một Node mới
Node *CreateNode(Event *ev)
{
    Node *pNode=new Node;
    if(pNode!=NULL)
    {
        pNode->data=ev;
        pNode->pNext=NULL;
    }
    else
    {
        cout<<"cap phat bo nho that bai!!!";
    }
    return pNode;
}

bool checkTitle(SingleList *list, string title) {
    Node *p=list->pHead;
    while(p!=NULL) {
        if(p->data->TieuDe == title) {
            return true;
        }
        p=p->pNext;
    }
    return false;
}

// Thêm một sự kiện vào danh sách LK đơn
Event *NhapEvent(SingleList *list)
{
    Event *ev=new Event;

    Frames();
    FramesInput();
    lineTitle();
    gotoxy(54, 12); cout << "ADD EVENT";

    fflush(stdin);
    gotoxy(45, 14); cout << "Tieu de: ";
    getline(cin, ev->TieuDe);
    while(checkTitle(list, ev->TieuDe)) {
        gotoxy(54, 14); cout << "                               ";
        gotoxy(79, 14); cout << "x";
        gotoxy(45, 14); cout << "Tieu de: ";
        getline(cin, ev->TieuDe);
    }
    gotoxy(79, 14); cout << " ";

    settingDay(*ev);

    settingHour(*ev);
    
    gotoxy(58, 24); cout << " ";
    fflush(stdin);
    gotoxy(44, 26); cout << "Noi dung: ";
    getline(cin, ev->NoiDung);

    gotoxy(70, 29); cout << "Nhan enter de hoan tat!";
    getch();
    return ev;
}

// Thêm một sự kiện vào cuối danh sách LK đơn
void InsertLast(SingleList *&list,Event *ev)
{
    Node *pNode=CreateNode(ev);
    if(list->pHead==NULL)
    {
        list->pHead=pNode;
    }
    else
    {
        Node *pTmp=list->pHead;
         
        while(pTmp->pNext!=NULL)
        {
            pTmp=pTmp->pNext;
        }
        pTmp->pNext=pNode;
    }
}

// Hiển thị danh sách đã nhập
void PrintList(SingleList *list)
{
    Node *pTmp=list->pHead;
    if(pTmp==NULL)
    {
        modalNuLL();
        return;
    }
    while(pTmp!=NULL)
    {
        Event *ev=pTmp->data;
        cout << "__________________________________________________" << endl;
        cout << endl;
        cout << "Tieu de: " << ev->TieuDe << endl;
        cout << "Thoi gian: " << ev->gio << ":" << ev->phut << ", " << ev->ngay << "/" << ev->thang << "/" << ev->nam << endl;
        cout << "Noi dung: " << ev->NoiDung << endl;
        cout << "__________________________________________________" << endl;
        pTmp=pTmp->pNext;
    }
}

// Hàm sắp xếp theo thời gian (sử dụng thuật toán sắp xếp trao đổi)
void SortList(SingleList *&list)
{
    cout << "Sap xep theo ngay tang dan" << endl;
    for(Node *p=list->pHead ; p!=NULL ; p=p->pNext)
    {
        for(Node *q=p->pNext ; q!=NULL ; q=q->pNext)
        {
            if(p->data->nam > q->data->nam){
                Event *tmp=p->data;
                p->data=q->data;
                q->data=tmp;
            }
            else if(p->data->nam == q->data->nam)
            {
                if(p->data->thang > q->data->thang)
                {
                    Event *tmp=p->data;
                    p->data=q->data;
                    q->data=tmp;
                }
                else if(p->data->thang == q->data->thang)
                {
                    if(p->data->ngay > q->data->ngay)
                    {
                        Event *tmp=p->data;
                        p->data=q->data;
                        q->data=tmp;
                    }
                    else if(p->data->ngay == q->data->ngay)
                    {
                        if(p->data->gio > q->data->gio)
                        {
                            Event *tmp=p->data;
                            p->data=q->data;
                            q->data=tmp;
                        }
                        else if(p->data->gio == q->data->gio)
                        {
                            if(p->data->phut > q->data->phut)
                            {
                                Event *tmp=p->data;
                                p->data=q->data;
                                q->data=tmp;
                            }
                            else if(p->data->phut == q->data->phut)
                            {
                                if(p->data->gio > q->data->gio)
                                {
                                    Event *tmp=p->data;
                                    p->data=q->data;
                                    q->data=tmp;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

// Hàm sắp xếp theo thời gian (sử dụng thuật toán sắp xếp nổi bọt)
void swap( Event *&a, Event *&b ){
    Event *tmp=a;
    a=b;
    b=tmp;
}
void SortList1(SingleList *&list) {
    Node *pTmp = list->pHead;
    if(pTmp == NULL) {
        cout << "Danh sach rong" << endl;
        return;
    }
    while(pTmp->pNext != NULL) {
        for(Node *q = pTmp->pNext ; q != NULL ; q = q->pNext) {
            if(pTmp->data->nam > q->data->nam) {
                swap(pTmp->data, q->data);
            }
            else if(pTmp->data->nam == q->data->nam) {
                if(pTmp->data->thang > q->data->thang) {
                    swap(pTmp->data, q->data);
                }
                else if(pTmp->data->thang == q->data->thang) {
                    if(pTmp->data->ngay > q->data->ngay) {
                        swap(pTmp->data, q->data);
                    }
                    else if(pTmp->data->ngay == q->data->ngay) {
                        if(pTmp->data->gio > q->data->gio) {
                            swap(pTmp->data, q->data);
                        }
                        else if(pTmp->data->gio == q->data->gio) {
                            if(pTmp->data->phut > q->data->phut) {
                                swap(pTmp->data, q->data);
                            }
                            else if(pTmp->data->phut == q->data->phut) {
                                if(pTmp->data->gio > q->data->gio) {
                                    swap(pTmp->data, q->data);
                                }
                            }
                        }
                    }
                }
            }
        }
        pTmp = pTmp->pNext;
    }
}

// Tìm kiếm theo tiêu đề (sử dụng thuật toán tìm kiếm nhị phân)
void SearchByTitleEvent(SingleList *list)
{
    string title;
    Frames();
    FramesInput();

    gotoxy(54, 12);
    fflush(stdin);
    cout << "Tieu de: ";
    getline(cin, title);
    Node *pTmp=list->pHead; 
    if(pTmp==NULL)
    {
        modalNuLL();
        return;
    }
    while(pTmp!=NULL)
    {
        Event *ev=pTmp->data;
        if(ev->TieuDe==title)
        {
            gotoxy(44, 14);
            cout << "___________________________________";
            gotoxy(44, 16);
            cout << "Tieu de: " << ev->TieuDe;
            gotoxy(44, 17);
            cout << "Thoi gian: " << ev->gio << ":" << ev->phut << ", " << ev->ngay << "/" << ev->thang << "/" << ev->nam;
            gotoxy(44, 18);
            cout << "Noi dung: " << ev->NoiDung;
            gotoxy(44, 19);
            cout << "___________________________________";
        }
        pTmp=pTmp->pNext;
    }
}

// xoá theo tiêu đề
void DeleteByTitle(SingleList *&list)
{
    string title;
    Frames();
    FramesInput();

    gotoxy(54, 12);
    fflush(stdin);
    cout << "Tieu de: ";
    getline(cin, title);

    Node *pDel=list->pHead;
    if(pDel==NULL)
    {
        modalNuLL();
    }
    else
    {
        Node *pPre=NULL;
        while(pDel!=NULL)
        {
            Event *ev=pDel->data;
            if(ev->TieuDe==title) {
                gotoxy(44, 14);
                cout << "___________________________________";
                gotoxy(44, 16);
                cout << "Tieu de: " << pDel->data->TieuDe;
                gotoxy(44, 17);
                cout << "Thoi gian: " << pDel->data->gio << ":" << pDel->data->phut << ", " << pDel->data->ngay << "/" << pDel->data->thang << "/" << pDel->data->nam;
                gotoxy(44, 18);
                cout << "Noi dung: " << pDel->data->NoiDung;
                gotoxy(44, 19);
                cout << "___________________________________";
                gotoxy(76, 29); cout << "Nhan enter de Xoa!";
                getch();
                modalComplete();
                break;
            }
            pPre=pDel;
            pDel=pDel->pNext;
        }
        if(pDel==NULL)
        {
            modalLook();
        }
        else
        {
            if(pDel==list->pHead)
            {
                list->pHead=list->pHead->pNext;
                pDel->pNext=NULL;
                delete pDel;
                pDel=NULL;
            }
            else
            {
                pPre->pNext=pDel->pNext; 
                pDel->pNext=NULL;
                delete pDel;
                pDel=NULL;
            }
        }
    }
}

// Đọc file .txt
int readFile(SingleList *&list)
{
    fstream f;
	f.open("event.txt", ios::in);

	string data;

	string line;
	while (!f.eof())
	{
		getline(f, line);
        cout << line << endl;
	}

	f.close();

	cout << data;
}

// ghi file .txt
void writeFile(SingleList *list) {
    FILE *f;
    f = fopen("event.txt", "w");
    Node *p = list->pHead;
    fprintf(f, "Danh sach ca su kien da them\n");
    while(p != NULL) {
        fprintf(f, "________________________________________\n");
        fprintf(f, "Tieu de: %s\n", p->data->TieuDe.c_str());
        fprintf(f, "Thoi Gian: %d/%d/%d\n", p->data->ngay, p->data->thang, p->data->nam);
        fprintf(f, "           %d:%d\n", p->data->gio, p->data->phut);
        fprintf(f, "Noi Dung: %s\n", p->data->NoiDung.c_str());
        fprintf(f, "________________________________________\n");
        p = p->pNext;
    }
    fclose(f);
}
void listMenuEvent() {
    
   	SingleList *list;
    Event *ev;
    Initialize(list);
    int cn=1;
	int a=1;
    
    do {
        system("cls");
        Frames();

		if (cn == 1){
            gotoxy(32, 15); cout << char(218);
            for(int i = 33 ; i <= 50 ; i++){
                gotoxy(i, 15); cout << char(196);
            }
            gotoxy(51, 15); cout << char(191);
            gotoxy(32, 16); cout << char(179);
            gotoxy(51, 16); cout << char(179);
            for(int i = 33 ; i <= 50 ; i++){
                gotoxy(i, 17); cout << char(196);
            }
            gotoxy(32, 17); cout << char(192);
            gotoxy(51, 17); cout << char(217);
        }
        gotoxy(38,16);
        cout << "THEM MOI" << endl;
   
        if (cn == 2){
            gotoxy(32, 18); cout << char(218);
            for(int i = 33 ; i <= 50 ; i++){
                gotoxy(i, 18); cout << char(196);
            }
            gotoxy(51, 18); cout << char(191);
            gotoxy(32, 19); cout << char(179);
            gotoxy(51, 19); cout << char(179);
            for(int i = 33 ; i <= 50 ; i++){
                gotoxy(i, 20); cout << char(196);
            }
            gotoxy(32, 20); cout << char(192);
            gotoxy(51, 20); cout << char(217);
        } 
        gotoxy(38,19);
        cout << "HIEN THI" << endl;

        if (cn == 3){
            gotoxy(32, 21); cout << char(218);
            for(int i = 33 ; i <= 50 ; i++){
                gotoxy(i, 21); cout << char(196);
            }
            gotoxy(51, 21); cout << char(191);
            gotoxy(32, 22); cout << char(179);
            gotoxy(51, 22); cout << char(179);
            for(int i = 33 ; i <= 50 ; i++){
                gotoxy(i, 23); cout << char(196);
            }
            gotoxy(32, 23); cout << char(192);
            gotoxy(51, 23); cout << char(217);
        }
        gotoxy(39,22);
        cout << "SAP XEP" << endl;

        if (cn == 4){
            gotoxy(32, 24); cout << char(218);
            for(int i = 33 ; i <= 50 ; i++){
                gotoxy(i, 24); cout << char(196);
            }
            gotoxy(51, 24); cout << char(191);
            gotoxy(32, 25); cout << char(179);
            gotoxy(51, 25); cout << char(179);
            for(int i = 33 ; i <= 50 ; i++){
                gotoxy(i, 26); cout << char(196);
            }
            gotoxy(32, 26); cout << char(192);
            gotoxy(51, 26); cout << char(217);
        }
        gotoxy(38,25);
        cout << "TIM KIEM" << endl;

        if (cn == 5){
            gotoxy(70, 15); cout << char(218);
            for(int i = 71 ; i <= 88 ; i++){
                gotoxy(i, 15); cout << char(196);
            }
            gotoxy(89, 15); cout << char(191);
            gotoxy(70, 16); cout << char(179);
            gotoxy(89, 16); cout << char(179);
            for(int i = 71 ; i <= 88 ; i++){
                gotoxy(i, 17); cout << char(196);
            }
            gotoxy(70, 17); cout << char(192);
            gotoxy(89, 17); cout << char(217);
        }
        gotoxy(77,16);
        cout << "DELETE" << endl;

        if (cn == 6){
            gotoxy(70, 18); cout << char(218);
            for(int i = 71 ; i <= 88 ; i++){
                gotoxy(i, 18); cout << char(196);
            }
            gotoxy(89, 18); cout << char(191);
            gotoxy(70, 19); cout << char(179);
            gotoxy(89, 19); cout << char(179);
            for(int i = 71 ; i <= 88 ; i++){
                gotoxy(i, 20); cout << char(196);
            }
            gotoxy(70, 20); cout << char(192);
            gotoxy(89, 20); cout << char(217);
        }
        gotoxy(75,19);
        cout << "SAVE FILE" << endl;

        if (cn == 7){
            gotoxy(70, 21); cout << char(218);
            for(int i = 71 ; i <= 88 ; i++){
                gotoxy(i, 21); cout << char(196);
            }
            gotoxy(89, 21); cout << char(191);
            gotoxy(70, 22); cout << char(179);
            gotoxy(89, 22); cout << char(179);
            for(int i = 71 ; i <= 88 ; i++){
                gotoxy(i, 23); cout << char(196);
            }
            gotoxy(70, 23); cout << char(192);
            gotoxy(89, 23); cout << char(217);
        }
        gotoxy(75,22);
        cout << "OPEN FILE" << endl;

        if (cn == 8){
            gotoxy(70, 24); cout << char(218);
            for(int i = 71 ; i <= 88 ; i++){
                gotoxy(i, 24); cout << char(196);
            }
            gotoxy(89, 24); cout << char(191);
            gotoxy(70, 25); cout << char(179);
            gotoxy(89, 25); cout << char(179);
            for(int i = 71 ; i <= 88 ; i++){
                gotoxy(i, 26); cout << char(196);
            }
            gotoxy(70, 26); cout << char(192);
            gotoxy(89, 26); cout << char(217);
        }
        gotoxy(78,25);
		cout << "BACK" << endl;

        int t = _getch();
        if (t == 13)
        {
            switch (cn)
            {
            case 1:
                {   
                    system("cls");
                    Event *ev= NhapEvent(list);
                    InsertLast(list,ev);
                    modalComplete();
                    getch();
                    break;
                }
            case 2:
                {
                    system("cls");
                    PrintList(list);
                    getch();
                    break;
                }
            case 3:
                {
                    system("cls");
                    SortList(list);
                    cout << "DS sau khi sap xep la: " << endl;
                    PrintList(list);
                    getch();
                    break;
                }
            case 4:
                {
                    system("cls");
                    SearchByTitleEvent(list);
                    gotoxy(70, 29); cout << "Nhan enter de tro ve!";
                    getch();
                    break;
                }
            case 5:
                {
                    system("cls");
                    DeleteByTitle(list);
                    getch();
                    break;
                }
            case 6:
                {
                    system("cls");
                    writeFile(list);
                    modalComplete();
                    getch();
                    break;
                }
            case 7:
                {
                    system("cls");
                    readFile(list);
                    getch();
                    modalComplete();
                    getch();
                    break;
                }
            case 8:
                {
                    system("cls");
                    return;
                }
            }
        }
        else if (t == 80)
        {
            cn++;
        }
        else if (t == 72)
        {
            cn--;
        }
         if (cn > 8)
        {
             
             cn = 1;
        }
        else if (cn < 1)
        {
             
             cn = 8;
        }
    }
    while (a);
}

void menuMain(DateTime time) {
    int cn=1;
    do {
        system("cls");
        Frames();

        gotoxy(50,15);
		if (cn == 1){
            gotoxy(52, 20); cout << char(175) << char(175);
            gotoxy(67, 20); cout << char(174) << char(174);
        }
        gotoxy(55, 20);cout << "Xem ngay le" << endl;

        if (cn == 2){
            gotoxy(52, 23); cout << char(175) << char(175);
            gotoxy(67, 23); cout << char(174) << char(174);
        }
        gotoxy(55, 23);cout << "Tao su kien" << endl;
        
        gotoxy(30,12);
		cout << "ESC: Exit" << endl;
        int t = _getch();
        
        if (t == 13)
        {
            switch (cn)
            {
		        case 1:
		        {
		            time.ListMenuNgayLe();
		            break;
		        }
		        case 2:
		        {
		            system("cls");
                    Frames();
		            listMenuEvent();
		            break;
		        }
            }
        }
        else if (t == 27)
        {
            system("cls");
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
             
             cn = 1;
        }
        else if (cn < 1)
        {
             cn = 2;
        }
    }
    while (1);
}

int main(){
    SingleList *list;
    Initialize(list);
    DateTime time;
    Event *ev;
	SetColor(0, 2);
	setFontSize(20);
	system("title QUAN LY SU KIEN"); 
    menuMain(time);
    return 0;
}
