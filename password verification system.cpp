//passward verification system

/*

NAME: MARIPET KERETO
REG: CT101/G/26655/25
COURSE: COMPUTER SCIENCE (B)

*/


#include <iostream>
using namespace std;

int main(){
    const	string correctusername = "Marishkereto";
	 const string correctpassword = "123@!321";
	
	string username, password;
	
	
	
	
	do{
       cout<<"Enter your username: "<<endl;
	   cin>>username;
       cout<<"Enter your passward: "<<endl;
       cin>>password;
       
       
       if (correctusername == username && correctpassword == password){
       	cout<<"Grant access"<<endl;
       	
       	
		   
	   }
	   else{
			   cout<<"Incorrect credential, try again!"<<endl;
		   }
	}
	
	while(username != correctusername || password != correctpassword);
	
	
	return 0;
}