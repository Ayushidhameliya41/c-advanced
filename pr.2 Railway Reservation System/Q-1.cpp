#include<iostream>
using namespace std;

class Train{
	public:
		int tno;
		string tn,sou,dest,time;
		void setDetails(int tno,string tn,string sou,string dest,string time){
			this->tno = tno;
			this->tn = tn;
			this->sou = sou;
			this->dest = dest;
			this->time = time;
		}
		
		void showAllTrain(){
			cout<<"Train no :- "<<this->tno<<endl;
			cout<<"Train Name :- "<<this->tn<<endl;
			cout<<"Train Source :- "<<this->sou<<endl;
			cout<<"Train Destination :- "<<this->dest<<endl;
			cout<<"Train Time :- "<<this->time<<endl;
		}
};

int main(){
	Train t[50];
	int ch,tno;
	string tn,sou,dest,time;
	int cnt=0,i;
	while(1){
		cout<<"Press 1 Add New Train Record"<<endl;
		cout<<"Press 2 Display All Train Record"<<endl;
		cout<<"Press 3 Search Train By Number"<<endl;
		cout<<"Press 4 Exit Menu"<<endl;
		cout<<"Enter Your Choise :- ";
		cin>>ch;
		
		if(ch == 4){
			cout<<"---------Thank you-----------";
			break;
		}
		
		switch(ch){
			case 1:
				cout<<"Enter Train Number :- ";
				cin>>tno;
				cout<<"Enter Train Name :- ";
				cin>>tn;
				cout<<"Enter Source :- ";
				cin>>sou;
				cout<<"Enter Destination :- ";
				cin>>dest;
				cout<<"Enter Train Time :- ";
				cin>>time;
				t[cnt++].setDetails(tno,tn,sou,dest,time);
				cout<<"Train successfully added"<<endl;
			break;
			
			case 2:
				for(i=0;i<cnt;i++){
					t[i].showAllTrain();
				}
			break;
			
			case 3:
				int tn;
				cout<<"Enter Train no :-"<<endl;
				cin>>tn;
				
				for(i=0;i<cnt;i++){
					if(t[i].tno==tn){
						cout<<"T Name :- "<<t[i].tn<<endl;
						cout<<"T Source :- "<<t[i].sou<<endl;
						cout<<"T Destination :- "<<t[i].dest<<endl;
						cout<<"T Time :- "<<t[i].time<<endl;
					}
				}
		}
	}
}
