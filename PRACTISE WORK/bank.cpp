//static 
#include<iostream>
using namespace std;
class bank
{
    public:
        static float roi;
        int acc;
        string name;
        void setData(int acc,string name)
        {
            this->acc=acc;
            this->name=name;
        }
        void getData()
        {
            cout << "Acc :- " << this->acc << endl;
            cout << "Name :- " << this->name << endl;
            cout << "Rate of Intrest :- " << this->roi << endl;
        }
};
float bank :: roi = 7.65;
int main()
{
    bank b1,b2;
    b1.setData(111,"Amit");
    b1.getData();
    b2.setData(222,"Ajay");
    b2.getData();
}