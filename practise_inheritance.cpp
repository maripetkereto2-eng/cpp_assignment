
#include <iostream>
using namespace std;

class Menuitem
{
	public:
		string name;
		double calories;
	
	void print(){
		cout<<name<<"["<<calories<<"cal]"<<endl;
		
	}
	
};

class drink : public  Menuitem 
{
	
	public:
		double rate;
		
		double cal_per_rate(){
			return calories / rate;
		}
		
};


int main(){
	
	
	Menuitem french_fries;
	
	french_fries.name= "Mandazi";
	french_fries.calories=344;
	
	french_fries.print();
	
	drink hot_chocolate;
	
	hot_chocolate.name= "Tea";
	hot_chocolate.calories=677;
	hot_chocolate.rate= 7;
	
	hot_chocolate.print();
	cout<<hot_chocolate.cal_per_rate()<<endl;
	
	
	return 0;
}