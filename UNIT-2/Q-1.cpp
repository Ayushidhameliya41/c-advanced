#include<iostream>
using namespace std;

class Student{
    public:
    void getDetails(){
        int grid,age,salary,exp;
        string name,role,city,cname;
        cout<<"Enter student emp_id :- ";
        cin>>grid;
        cout<<"Enter student emp_name:- ";
        cin>>name;
        cout<<"Enter student emp_age :- ";
        cin>>age;
        cout<<"Enter student emp_role :- ";
        cin>>role;
        cout<<"Enter student emp_salary :- ";
        cin>>salary;
        cout<<"Enter student emp_city :- ";
        cin>>city;
        cout<<"Enter student emp_experience :- ";
        cin>>exp;
        cout<<"Enter student emp_company_name :- ";
        cin>>cname;
        
        cout<<"id :- "<<grid<<endl;
        cout<<"Name :- "<<name<<endl;
        cout<<"age :- "<<age<<endl;
        cout<<"role :- "<<role<<endl;
        cout<<"salary :- "<<salary<<endl;
        cout<<"city :- "<<city<<endl;
        cout<<"experience :- "<<exp<<endl;
        cout<<"emp_company_name :- "<<cname<<endl;
    }  
};

int main(){
    Student s;
    s.getDetails();
    return 0;
}