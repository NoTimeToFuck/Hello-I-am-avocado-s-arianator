#include <iostream>
#include <vector>
#include <string>
#include<windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	
	//welcome
	
	
	char answer1;
	string answer2;
	
	cout<<"are you an Arianator(a) or Avocado(b)?"<<"\n";
	cout<<"please type 'a' or 'b'."<<"\n";
	cin>>answer1;
	do{
	 //seems like this statement is not nesscersery?
	cout<<"can u please type again?"<<"\n";
	cin>>answer1;
	
			
	}
	while(answer1 != 'a'&&answer1 !='b');
	
			if(answer1 == 'a'){
			cout<<"What do u want to know?"<<"(Birthday or Height)"<<"\n";
			cin>>answer2;
				do{
					cout<<"can u please type again?"<<"\n";
					cin>>answer2;			
					}
				
				while (answer2 !="Birthday"&& answer2!="Height");
				
				if(answer2 == "Birthday"){
						
					cout<<"Her birthday is on June 26, 1993"<<"(which is near my birthday by 12 days only!!!!!)"<<"\n";
					answer2 ="0";
					}
				else if(answer2 == "Height"){
						
					cout<<"Shorter than u!"<<"She has 1.53m only!"<<"\n";
					answer2 ="0";
					}
			}	
			else if(answer1 == 'b'){
				cout<<"What do u want to know?"<<"(Birthday or Height)"<<"\n";
				cin>>answer2;
				do{
					cout<<"can u please type again?"<<"\n";
					cin>>answer2;			
					}
				
				while (answer2 !="Birthday"&&answer2 !="Height");
				
					if(answer2 == "Birthday"){
						
						cout<<"Her birthday is on December 18, 2001"<<"(which is near christmas by 7 days only!)"<<"\n";
						answer2 ="0";
					}
					else if(answer2 == "Height"){
						
						cout<<"Shorter than u!"<<"She has 1.61m only!"<<"\n";
						answer2 ="0";
					}
				}			

	
	
	cout<<"this application will close in 5 seconds.";
	Sleep(5000);
	return 0;
}
