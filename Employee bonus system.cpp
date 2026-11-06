#include <iostream>
/*

MARIPET KERETO 
CT101/G/26655/25

EMPLOYEE BONUS SYSTEM 
*/



#include <iomanip>
#include <string>
using namespace std;

int main(){
	string name;
    float b_salary, bonus, totalSalary;
	
	for(int i = 1; i<6; i++ ){
		
		cout<<"Employee: "<<i<<endl;
		cout<<"Enter name: "<<endl;
		getline(cin >>ws, name);
		cout<<"Enter basic salary: " <<endl;
		cin>>b_salary;
		
		
		bonus = 0.05 * b_salary;
		totalSalary = b_salary + bonus;
		
		
		cout<<fixed<<setprecision(2);
		cout<< "\n---REPORT FOR EMPLOYEE"<<i<< "----"<<endl;
		cout<<"Name         : "<<name<<endl;
		cout<<"Basic Salary : "<<b_salary<<endl;
		cout<<"Bonus        :  "<<bonus<<endl;
		cout<<"Total Salary : "<<totalSalary;
		cout<<"-----------------------\n"<<endl;

	} 
	return 0;
}