

/*

Name: Maripet Kereto
Reg: CT101/G/26655/25
Course: COMPUTER SCIENCE

GRADING SYSTEM

*/

#include <iostream>

using namespace std;


int main(){
	
	string StudentName;
	float ExamMarks;
	char grade;
	
	cout<<"Enter student name: "<<endl;
	getline(cin, StudentName);
	
	cout<<"Enter Exam marks: "<<endl;
	cin>>ExamMarks;
	
	if (ExamMarks >= 70 && ExamMarks <=100){
		
		grade = 'A';
	}
	else if (ExamMarks >= 60 && ExamMarks <= 69){
		
		grade ='B';
	}
	else if (ExamMarks >= 50 && ExamMarks <=59){
	
        grade = 'C';
        
	}
	else if (ExamMarks >= 40 && ExamMarks <= 49){
		
		grade = 'D';
		
	}
	else{
		
		grade = 'E';
		
	}
	cout<<"====================="<<endl;
		cout<<"STUDENT MARKS"<<endl;
		cout<<"====================="<<endl;
		cout<<"\n"<<endl;
		
		cout<<"Name  : "<<StudentName<<endl;
		cout<<"Marks  : "<<ExamMarks<<endl;
		cout<<"Grade  : "<<grade<<endl;
		
		cout<<"====================="<<endl;
	
	
	
	
	
	
	
}