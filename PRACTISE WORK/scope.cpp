//scop operatore
#include<iostream>
using namespace std;
class student
{
    public:
void sum();
};
void student :: sum()//scop operatore
{
    int a=10,b=5;
    cout << "Ans :- " << a+b <<endl; 
}
int main()
{
    student s;
    s.sum();
}