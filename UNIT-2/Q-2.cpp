#include <iostream>
using namespace std;

class Student
{
public:
    void getDetails()
    {
        int carid;
        string name, color, model, rname;
        cout << "Enter car_id :- ";
        cin >> carid;
        cout << "Enter car_campany_name:- ";
        cin >> name;
        cout << "Enter car_color :- ";
        cin >> color;
        cout << "Enter car_model :- ";
        cin >> model;
        cout << "Enter car_release_name :- ";
        cin >> rname;

        cout << "car_id :- " << carid << endl;
        cout << "car_campany_name :- " << name << endl;
        cout << "car_color :- " << color << endl;
        cout << "car_model :- " << model << endl;
        cout << "car_release_name :- " << rname << endl;
    }
};

int main()
{
    Student s;
    s.getDetails();
    return 0;
}