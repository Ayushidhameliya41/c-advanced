#include <iostream>
using namespace std;
int main();
class customers {
public:
    int i,a;
    string n,c,ct,e,clg;
    

    void setDetails(int i,string n,int a,string c,string ct,string e,string clg) {
        this->i = i;
        this->n = n;
        this->a = a;
        this->c = c;
        this->ct = ct;
        this->e = e;
        this->clg = clg;
    }


    void getDetails(){
        cout << "ID :- " << i << endl;
        cout << "Name :- " << n << endl;
        cout << "Age :- " << a << endl;
        cout << "Course :- " << c << endl;
        cout << "City :- " << ct << endl;
        cout << "Email :- " << e << endl;
        cout << "College :- " << clg << endl;
    }
};

int main() {
    Student students[5];
    int i,a;
    string n,c,ct,e,clg;

    cout << "Enter details for 5 students." << endl;
    for (int i = 0; i < 5; i++) {
         cout << "ID :- ";
         cin >> i ;
         cout << "Name :- ";
         cin >> n ;
         cout << "Age :- " ;
         cin >> a ;
         cout << "Course :- ";
         cin >> c ;
         cout << "City :- " ;
         cin >> ct ;
         cout << "Email :- ";
         cin >> e ;
         cout << "College :- ";
         cin >> clg ;
         students[i].setDetails(i,n,a,c,ct,e,clg);
    }

    cout << "Displaying all student records:\n";
    for (int i = 0; i < 5; i++) {
        students[i].getDetails();
    }

    return 0;
}