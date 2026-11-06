


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
	
	float balance, withdrawal;
	
	cout<<"Enter account balance: "<<endl;
	cin>>balance;
	
	while (balance> 0){
		cout<<"Enter amount to withdraw: "<<endl;
		cin>>withdrawal;
		
        if(balance < withdrawal){
        	
            cout<<"Insufficient balance, widthrawal stopped."<<endl;
		    break;
			
				
			}
        balance -= withdrawal;
        cout<<"Remain balance: "<<balance<<endl;
        
        
        if(balance == 0 ){
			cout<<"Balance is Zero. No more withdrawals possible."<<endl;
		}
			
	}
	
}