#include <iostream>
using namespace std;

class Hotel {
public:
    int id,year,squa,rqua;
    string name,type,rat,loc;
    
    void getDetails() {
        cout << "Enter Hotel ID: ";
        cin >> id;

        cout << "Enter Hotel Name : ";
        cin >> name;

        cout << "Enter Hotel Type :- ";
        cin >> type;

        cout << "Enter Hotel Rating :- ";
        cin >> rat;

        cout << "Enter Hotel Location :- ";
        cin >> loc;

        cout << "Enter Establishment Year :- ";
        cin >> year;

        cout << "Enter Staff Quantity :- ";
        cin >> squa;

        cout << "Enter Room Quantity :- ";
        cin >> rqua;
    }

    void setDetails() {

        cout << "Hotel ID :- " << id << endl;
        cout << "Hotel Name :- " << name << endl;
        cout << "Hotel Type :- " << type << endl;
        cout << "Hotel Rating :- " << rat << endl;
        cout << "Hotel Location :- " << loc << endl;
        cout << "Established Year :- " << year << endl;
        cout << "Staff Quantity :- " << squa << endl;
        cout << "Room Quantity :- " << rqua << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of hotels :- " 
    ;
    cin >> n;

    Hotel hotels[n]; 

    for (int i = 0; i < n; i++) {
        cout << "Enter details for hotel: " << endl;
        hotels[i].getDetails();
    }

    cout << " Displaying Hotel Records ";
    for (int i = 0; i < n; i++) {
        hotels[i].setDetails();
    }

    return 0;
}