
#include <iostream>
using namespace std;

class Student{
	private:
		string Fullname;
		int Age;
		public:
		string getFullname(){
			return Fullname;
		}
		int getAge(){
			return Age;
		}
		
		 void setFullname(string newname){
			Fullname = newname;
		}
		void setAge(int age){
			Age = age;
		}
	
	
};


int main(){
	 Student student1;
	 student1.setFullname("James");
	 student1.setAge(18);
	 
	 cout<<student1.getFullname()<<endl;
	 cout<<student1.getAge()<<endl;
}