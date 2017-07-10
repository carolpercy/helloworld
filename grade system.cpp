#include<iostream>
#include<string>
using namespace std;
int main(){
	int grade;
	string comment=" ";
	cout<<"enter your grade"<<endl;
	cin>>grade;
	if(grade>=90){
			cout<<"A"<<endl;
		comment= "excellent";
		cout<<comment;
	}
	else
		if(grade>=80){
				cout<<"B"<<endl;
				
		}
		else
			if(grade>=70){
				cout<<"C"<<endl;	
			}
				else
					if(grade>=60){
						cout<<"D"<<endl;	
					}	
					else
					cout<<"F";	
					
}
