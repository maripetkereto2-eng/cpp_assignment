

/* 

HOTEL MANAGEMENT SYSTEM

NAME: MARIPET KERETO
REG: CT101/G/26655/25

*/
#include <iostream>

using namespace std;

int main(){
	 const int DAYS = 7;
	float revenue[DAYS];
	double total = 0;
	
	
	for(int i  = 0; i< DAYS; ++i){
		cout<<"Enter Revenue for day "<<i+1<< ": "<<endl;
		cin>>revenue[i];
		total += revenue[i];
		
	}
	
	double average = total / DAYS;
	
	//DISPLAY RESULTS;
	cout<<"\nTotal weekly revenue: "<<total<<endl;
	cout<<"\nAvarage daily revenue: "<<average<<endl;
	
	return 0;
}