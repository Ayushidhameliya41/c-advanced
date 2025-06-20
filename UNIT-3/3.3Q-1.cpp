#include <iostream>
using namespace std;

class DiamondCompany
{
public:
    int id, squa, idia, edia;
    string n, c;
    double rev;

    DiamondCompany(int id, string n, int squa, double rev, int idia, int edia, string c)
    {
        this->id = id;
        this->n = n;
        this->squa = squa;
        this->rev = rev;
        this->idia = idia;
        this->edia = edia;
        this->c = c;
    }

    void display()
    {
        cout << "\nCompany_ID: " << id << endl;
        cout << "Company_Name: " << n << endl;
        cout << "Staff_Quantity: " << squa << endl;
        cout << "Annual_Revenue: $" << rev << endl;
        cout << "Raw_Diamonds_Imported: " << idia << endl;
        cout << "Diamonds_Exported: " << edia << endl;
        cout << "CEO: " << c << endl;
    }
};

int main()
{
    int n, i;
    cout << "Enter number of Diamond Companies: ";
    cin >> n;

    DiamondCompany *companies[n];

    for (int i = 0; i < n; i++)
    {
        int id, squa, idia, edia;
        string n, c;
        double rev;

        cout << "\nEnter details for company " << i + 1 << ":\n";

        cout << "Company ID: ";
        cin >> id;

        cout << "Company Name: ";
        cin >> n;

        cout << "Staff Quantity: ";
        cin >> squa;

        cout << "Annual Revenue (in million USD): ";
        cin >> rev;

        cout << "Raw Diamonds Imported per year: ";
        cin >> idia;

        cout << "Diamonds Exported per year: ";
        cin >> edia;

        cout << "CEO Name: ";
        cin >> c;

        companies[i] = new DiamondCompany(i, n, squa, rev, idia, edia, c);
    }

    cout << "\n--- Diamond Companies Information ---\n";
    for (int i = 0; i < n; i++)
    {
        companies[i]->display();
    }

    for (int i = 0; i < n; i++)
    {
        delete companies[i];
    }

    return 0;
}
