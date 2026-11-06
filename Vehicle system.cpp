#include <iostream>
using namespace std;

class vehicle 
{    public:
		string brand;
		int year;
		
		
		void displayVehicle();
};

class car: public vehicle
{  public:
	  int no_doors;
	  double EngineCapacity;
	  
	  void displayCar();
  	
};


int main(){
	 
	 car car1;
	 
	 car1.brand = "Mercedes";
	 car1.year=2032;
	 car1.no_doors = 4;
	 car1.EngineCapacity = 4000.2;
	 car1.displayVehicle();
	 car1.displayCar();
	 
	 return 0;
	 
}	 
	 
void vehicle::displayVehicle(){
	cout<<"Brand: "<<brand<<endl;
	cout<<"Year: "<<year<<endl;
		
	}
void car::displayCar(){
	cout<<"Number of doors: "<<no_doors<<endl;
	cout<<"Engine capacity: "<<EngineCapacity<<endl;
		
	}
	

