

/* 

NAME: MARIPET KERETO
REG: CT101/G/26655/25


PAYPAL SYSTEM USING FUNCTION


*/

#include <iostream>
#include <string>

using namespace std;



void getCustomerDetail(string name, float basicSalary, double overtimeHours){
	
	cout<<"Enter Customer name: "<<endl;
	getline(cin, name);
	
	cout<<"Enter basic salary: "<<endl;
	cin>>basicSalary;
	
	cout<<"Enter overtime hours: "<<endl;
	cin>>overtimeHours;
	
}


int main()
{ 
	cout<<getCustomerDetail()<<endl;
	
	return 0;
}
