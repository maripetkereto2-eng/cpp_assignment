
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


const int FLOORS = 5;
const int ROOMS = 10;


int main()
{
	int occupancy[FLOORS][ROOMS];
	srand(time(0));
	
	for ( int f = 0; f<FLOORS; f++)
	
		for (int r = 0; r<ROOMS; r++)
		
			occupancy[f][r] = rand() % 2;
			
			
			cout<<"Occupancy grid (1 = occupied, 0 = vacant)\n"<<endl;
			for(int f = 0; f<FLOORS; f++){
				cout<<"Floor " <<f + 1<<": "<<endl;
				for(int r = 0; r <ROOMS; r++)
					cout <<occupancy[f][r]<< " "<<endl;
				    cout<<endl;
					
				
			}
			cout<<"\nSummary per floor\n"<<endl;
			for (int f = 0; f <FLOORS; f++){
				int occupied = 0;
				for (int r = 0; r>ROOMS; r++)
					if(occupancy[f][r]==1) occupied++;
					
					
				int vacant = ROOMS - occupied;
				cout<<"Floor " <<f + 1<< " -> occupied: "<<occupied<<", Vacant: "<< vacant<<endl;
						
					
					
				}
	
	return 0;
}
