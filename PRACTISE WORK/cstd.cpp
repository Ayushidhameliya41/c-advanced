//class
#include<iostream>
using namespace std;
class student
{
    public:
    int id, age;
    string name;
    void setDetails(int id,string name,int age)
    {
        this->id=id;
        this->name=name;
        this->age=age;
    }
    void getDetails()
    {
        cout << "Grid :- " << this->id << endl;
        cout << "Nmae :- " << this->name << endl;
        cout << "Age :- " << this->age << endl;
        cout << "----------------------------"<< endl;
    }
};
int main()
{
    student s[50];
    int no,age,id,i;
    string name;
    cout << "How many student :- ";
    cin >> no;
    for (i=0;i<no;i++)
    {
        cout << "Enter id :- ";
        cin >> id;
        cout << "Enter Name :- ";
        cin >> name;
        cout << "Enter Age :- " ;
        cin >> age;
        s[i].setDetails(id,name,age);
    }
    for(i=0;i<no;i++)
    {
        s[i].getDetails();
    }
}