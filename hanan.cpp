#include<iostream>

using namespace std;
struct address{
	char city[56];
	int housenum;
	};
struct registor{
	char name[100];
	int phone_number;
	address add;
}admin,cust;
 

void registorAdmin(registor admin);

void registorCust(registor cust){
	cout<<"Enter ur name :";
	cin>>cust.name;
	cout<<"Enter ur phone number :";
	cin>>cust.phone_number;
	cout<<"Enter the city u live :";
	cin>>cust.add.city;
	cout<<"Enter the  your houuse numer  live :";
	cin>>cust.add.city;
	
}
void registorAdmin(registor admin){
	
	cout<<"Enter ur name :";
	cin>>admin.name;
	cout<<"Enter ur phone number :";
	cin>>admin.phone_number;
	cout<<"Enter the city u live :";
	cin>>admin.add.city;
	cout<<"Enter the  your houuse numer  live :";
	cin>>admin.add.city;
	
	}

