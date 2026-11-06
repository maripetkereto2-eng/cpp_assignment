
/* 

NAME: MARIPET KERETO
REG: CT101/G/26655/25
COURSE:COMPUTER SCIENCE


SIMPLE CALCULATER 
*/


#include <iostream>
using namespace std;


int main(){
	float num1, num2;
	char op;
	float results;
	
	
	
	
	cout<<"Enter first number: "<<endl;
	cin>>num1;
	
	cout<<"Enter an operator( +, -, /, *: "<<endl;
	cin>>op;
	
	
		cout<<"Enter second  number: "<<endl;
	cin>>num2;
	
	
	
	switch (op){
		case '+':
			results = num1+num2;
			break;
		case '-':
			results = num1-num2;
			break;
		case '*':
			results =num1*num2;
			break;
		case '/':
			if (num2 != 0){
				results =  num1/num2;
				break;
				
			}
			else{
				cout<<"Error!, division by zero is not allowed"<<endl;
			}
			break;
			
		default:
			cout<<"Error! Invalid operator"<<endl;	
			break;
							
	}
	
cout<<"    -----------------      "<<endl;
cout<<"    SIMPLE CALCULATOR   "<<endl;
cout<<"    -----------------      "<<endl;	
cout<< "   Results  =    " <<results<<endl;
cout<<"    -----------------      "<<endl;

	
		
	
	
	
}