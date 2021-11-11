// viết menu chươnng trình
// 1. thêm sự kiện(sử dụng danh sách liên kết để lưu trữ)(Tiêu đề, vị trí, ngày tháng, giờ, phút, nội dung)
// 2. xóa sự kiện(theo tiêu đề)
// 3. sửa sự kiện(theo tiêu đề)
// 4. tìm kiếm sự kiện(theo tiêu đề, ngày, tháng)
// 5. xuất danh sách sự kiện
// 6. lưu danh sách sự kiện ra file
// 7. đọc danh sách sự kiện từ file

#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

struct Node{
    int data;
    Node *pNext;
};

class Event{
    private:
        Node *pHead;
        Node *pTail;
        string title;
        string location;
        int x_day;
        int x_month;
        int x_year;
        int x_hour;
        int x_minute;
        string content;
    public:
        Event();
        Node *createNode(int x){
            Node *p = new Node;
            p->data = x;
            p->pNext = NULL;
            return p;
        }
        void EnterEvent();
        void OutputEvent();
        void addEvent();
        void deleteEvent();
        void editEvent();
        void searchEvent();
        void printEvent();
        void saveEvent();
        void readEvent();
};

Event::Event(){
    pHead = NULL;
    pTail = NULL;
}

void Event::EnterEvent(){
    cout << "Nhap tieu de: ";
    getline(cin, title);
    cout << "Nhap vi tri: ";
    getline(cin, location);
    cout << "Nhap ngay: ";
    cin >> x_day;
    cin.ignore();
    cout << "Nhap thang: ";
    cin >> x_month;
    cin.ignore();
    cout << "Nhap nam: ";
    cin >> x_year;
    cin.ignore();
    cout << "Nhap gio: ";
    cin >> x_hour;
    cin.ignore();
    cout << "Nhap phut: ";
    cin >> x_minute;
    cin.ignore();
    cout << "Nhap noi dung: ";
    getline(cin, content);
}

void Event::OutputEvent(){
    cout << "Tieu de: " << title << endl;
    cout << "Vi tri: " << location << endl;
    cout << "Ngay: " << x_day << "/" << x_month << "/" << x_year << endl;
    cout << "Gio: " << x_hour << ":" << x_minute << endl;
    cout << "Noi dung: " << content << endl;
}

void Event::addEvent(){
    Node *p = createNode(1);
    if(pHead == NULL){
        pHead = p;
        pTail = p;
    }
    else{
        pTail->pNext = p;
        pTail = p;
    }
}

void Event::deleteEvent(){
    Node *p = pHead;
    Node *q = NULL;
    while(p != NULL){
        if(p->data == 1){
            if(p == pHead){
                pHead = p->pNext;
            }
            else{
                q->pNext = p->pNext;
            }
            delete p;
            break;
        }
        q = p;
        p = p->pNext;
    }
}

void Event::editEvent(){
    Node *p = pHead;
    while(p != NULL){
        if(p->data == 1){
            p->data = 2;
            break;
        }
        p = p->pNext;
    }
}

void Event::searchEvent(){
    Node *p = pHead;
    while(p != NULL){
        if(p->data == 1){
            p->data = 2;
            break;
        }
        p = p->pNext;
    }
}

void Event::printEvent(){
    Node *p = pHead;
    while(p != NULL){
        cout << p->data << endl;
        p = p->pNext;
    }
}

void Event::saveEvent(){
    Node *p = pHead;
    while(p != NULL){
        cout << p->data << endl;
        p = p->pNext;
    }
}

void Event::readEvent(){
    Node *p = pHead;
    while(p != NULL){
        cout << p->data << endl;
        p = p->pNext;
    }
}

int main(){
    Event event;
    int choice;
        cout << "1. Add event" << endl;
        cout << "2. Delete event" << endl;
        cout << "3. Edit event" << endl;
        cout << "4. Search event" << endl;
        cout << "5. Print event" << endl;
        cout << "6. Save event" << endl;
        cout << "7. Read event" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                event.addEvent();
                break;
            case 2:
                event.deleteEvent();
                break;
            case 3:
                event.editEvent();
                break;
            case 4:
                event.searchEvent();
                break;
            case 5:
                event.printEvent();
                break;
            case 6:
                event.saveEvent();
                break;
            case 7:
                event.readEvent();
                break;
            case 8:
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    return 0;
}
