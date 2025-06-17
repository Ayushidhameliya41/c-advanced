#include <iostream>
using namespace std;

int main() 
{
    int seconds; 
    cout << "Enter total seconds: ";
    cin >> seconds;
    {
        int hours = seconds / 3600;
        int minutes = (seconds % 3600) / 60;
        int seconds = seconds % 60;

        cout << "HH:MM:SS :- ";
             
            if (hours<10)cout<<'0';
            cout<<hours<<'.';
             
            if (minutes < 10)cout<<'0';
            cout<<minutes<<'.';


            if (seconds < 10)cout<< '0';
            cout<<seconds<<endl;
    }
}
