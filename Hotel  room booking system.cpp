//HOTEL BOOKING SYSTEM

/*

NAME:MARIPET KERETO
REG: CT101/G/26655/25


*/


#include <iostream>
using namespace std;

class RoomBooking
{
	private:
		string name;
		int room_No;
		int No_days_book;
		public:
		RoomBooking(string y, int x, int z)
		{
			name = y;
			room_No = x;
			No_days_book = z;
			cout<<"Room booking confirmed"<<endl;
			
		}
		
		void displayBooking()
		{
			
			cout<<"---HOTEL BOOKING SYSTEM---"<<endl;
			cout<<"Guest name : "<<name<<endl;
			cout<<"Room Number : "<<room_No<<endl;
			cout<<"Number of days booked : "<<No_days_book<<endl;
			
		}
		~RoomBooking()
		{
			cout<<"Booking ended, room released"<<endl;
		}
		
};

int main()
{
	RoomBooking Rb("Robert", 4, 2);
	
	Rb.displayBooking();

	return 0;
}