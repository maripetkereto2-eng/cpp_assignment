/* C++ Program for Mobile Phone Reciept System

  NAME: Maripet Kereto
  REG NO: CT101/G/26655/25
  COURSE: Computer Science
  */
#include <iostream>
using namespace std;

int main() {
	
	//declare variables
	string customer_name;
	string phone_model;
	int  quantity;
	float price_per_phone;
	
	//prompt user to enter the given details
	cout<<"Enter name: "<<endl;
	getline(cin,customer_name);
	
	cout<<"Enter phone model: "<<endl;
	getline(cin, phone_model);
	
	cout<<"Enter number of items: "<<endl;
	cin>>quantity;
	
	cout<<"Enter price: "<<endl;
	cin>>price_per_phone;
	
	//calculate total sales
	float TotalSalesAmount = quantity * price_per_phone;
	
	//display receipt
	cout<<"========================="<<endl;
	cout<<"MOBILE PHONE SALES RECEIPT"<<endl;
	cout<<"========================="<<endl;
	
	cout<<"Customer Name: "<<customer_name<<endl;
	cout<<"Phone model  :   "<<phone_model<<endl;
	cout<<"Quantities   : "<<quantity<<endl;
	cout<<"Price/phone  : "<<price_per_phone<<endl;
	cout<<"========================="<<endl;
	
	cout<<"Total sales amount: "<<TotalSalesAmount<<endl;
	cout<<"========================="<<endl;
	
	return 0;
}