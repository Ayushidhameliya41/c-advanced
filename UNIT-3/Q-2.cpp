#include <iostream>
using namespace std;
int main();
class customer
{
public:
    int i, a, sval, mn;
    string n, ct, tn;

    void setDetails(int i, string n, int a, string ct, int mn, int sval, string tn)
    {
        this->i = i;
        this->n = n;
        this->a = a;
        this->ct = ct;
        this->mn = mn;
        this->sval = sval;
        this->tn = tn;
    }

    void getDetails()
    {
        cout << "CUST_ID :- " << i << endl;
        cout << "CUST_Name :- " << n << endl;
        cout << "CUST_Age :- " << a << endl;
        cout << "CUST_City :- " << ct << endl;
        cout << "CUST_Mobile_Number :- " << mn << endl;
        cout << "CUST_Simcard_validity :- " << sval << endl;
        cout << "CUST_telecom_brand_name :- " << tn << endl;
    }
};

int main()
{
    customer customers[5];
    int i, a, sval, mn;
    string n, ct, tn;

    cout << "Enter details for 5 students." << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "ID :- ";
        cin >> i;
        cout << "Name :- ";
        cin >> n;
        cout << "Age :- ";
        cin >> a;
        cout << "City :- ";
        cin >> ct;
        cout << "Mobile_Number:- ";
        cin >> mn;
        cout << "Simcard_validity  :- ";
        cin >> sval;
        cout << "telecom_brand_name :- ";
        cin >> tn;
        customers[i].setDetails(i, n, a, ct, mn, sval, tn);
    }

    cout << "Displaying all student records:\n";
    for (int i = 0; i < 5; i++)
    {
        customers[i].getDetails();
    }

    return 0;
}