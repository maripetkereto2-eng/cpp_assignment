#include <iostream>
using namespace std;

class Person
{
	public:
		string name;
		int age;
		
		void displayPerson();
	
};

class Student : public Person
{
	public:
		string admission_No;
		int student_class;
		
		void displayStudent();
		
};

int main(){
	
	Student student1;
	
	student1.name="Bravin";
	student1.age=19;
	student1.admission_No= "CT101/g/26655/25";
	student1.student_class = 4;
	
	student1.displayPerson();
	student1.displayStudent();
	
	return 0; 
	
	
}
// === FUNCTION DEFINITIONS ===

// Implementation of displayPerson
void Person::displayPerson() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

// Implementation of displayStudent
void Student::displayStudent() {
    cout << "Admission No: " << admission_No << endl;
    cout << "Class: " << student_class << endl;
}