
/*

C++  Driving test results Evaluation System

  Name: Maripet Kereto
  Reg : CT101/G/26655/25
  Course: COMPUTER SCIENCE
  
  */

#include <iostream>
using namespace std;

int main(){
	string Student_name;
	float TheoryTestMarks;
	float PracticalTestMarks;
	float average_Score;
	
	cout<<"Enter name: "<<endl;
	getline(cin, Student_name);
	
	cout<<"Enter theory test marks: "<<endl;
	cin>>TheoryTestMarks;
	
	cout<<"Enter practical test marks: "<<endl;
	cin>>PracticalTestMarks;
	
	
	average_Score = (TheoryTestMarks + PracticalTestMarks)/2;
	
	if (average_Score >= 50){
		cout<<"============================"<<endl;
	cout<<"DRIVING TEST RESULTS"<<endl;
    cout<<"============================"<<endl;
    cout<<"\n"<<endl;
    
    cout<<"Student name    : "<<Student_name<<endl;
    cout<<"Practical marks : "<<PracticalTestMarks<<endl;
    cout<<"Theory marks    : "<<TheoryTestMarks<<endl;
    cout<<"RESULST   : Passed"<<endl;
    cout<<"\n"<<endl;
    
    cout<<"============================"<<endl;
    cout<<"Average Score   : " <<average_Score<<endl;
    cout<<"============================"<<endl;
		
	}
	else{
		cout<<"============================"<<endl;
	cout<<"DRIVING TEST RESULTS"<<endl;
    cout<<"============================"<<endl;
    cout<<"\n"<<endl;
    
    cout<<"Student name    : "<<Student_name<<endl;
    cout<<"Practical marks : "<<PracticalTestMarks<<endl;
    cout<<"Theory marks    : "<<TheoryTestMarks<<endl;
    cout<<"RESULST   : Failled"<<endl;
    cout<<"\n"<<endl;
    
    cout<<"============================"<<endl;
    cout<<"Average Score   : " <<average_Score<<endl;
    cout<<"============================"<<endl;
	
	}
	
	
    
    

	
	
	
	
}