


/* 

ADDMISSION DESICION 

NAME: MARIPET KERETO
REG: CT101/G/26655/25

*/


#include <iostream>

using namespace std;


int main(){
	
	string student_name, status;
	int age;
    int exam_score;
    
    cout<<"Enter your name: "<<endl;
    getline(cin, student_name);
    cout<<"Enter you age: "<<endl;
    cin>>age;
    cout<<"Enter your math score: "<<endl;
    cin>>exam_score;
    
    if (age >= 18){
		if(exam_score >= 50){
			status="Admitted";
		}
			
	    else{
		   status = "Not admitted :low score";
		
        }		
		
	}
	else{
		status = "Not addmitted. underage";
	}
	
	
	cout<<"==================="<<endl;
	cout<<"ADDMISSION DECISION"<<endl;
	cout<<"====================="<<endl;
	
	cout<<"\n"<<endl;
	
	cout<<"Name: "<<student_name<<endl;
	cout<<"Age: "<<age<<endl;
	cout<<"exam score: "<<exam_score<<endl;
	cout<<"Status: "<<status<<endl;
	cout<<"======================"<<endl;                           
	
	
	
}