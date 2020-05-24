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
	
	do
	{
	cin>>answer1;
	
		if(answer1 == 'a')
		{		
			//correct1
			cout<<"What do u want to know?"<<"(Birthday or Height)";
			
			do
			{
				
				cin>>answer2;		
					
				if(answer2 == "Birthday")
				{
					cout<<"Her birthday is on June 26, 1993"<<"(which is near my birthday by 12 days only!!!!!)"<<"\n";
					answer2 ="0";
				}
					
				else if(answer2 == "Height")
				{
					cout<<"Shorter than u!"<<"She has 1.53m only!"<<"\n";
					answer2 ="0";
				}
					
				else
				{
					cout<<"can u please type again?"<<"\n";
					answer2="0";
				}
				
			}while (answer2 =="0");
				
		}
		
		
			
		else if(answer1 == 'b')
		{
			//correct 2
			cout<<"What do u want to know?"<<"(Birthday or Height)"<<"\n";
			
			do
			{
				cin>>answer2;			

				if(answer2 == "Birthday")
				{
					
					cout<<"Her birthday is on December 18, 2001"<<"(which is near christmas by 7 days only!)"<<"\n";
					answer2 ="0";
				}
				else if(answer2 == "Height"){
					
					cout<<"Shorter than u!"<<"She has 1.61m only!"<<"\n";
					answer2 ="0";
				}
				else
				{
					cout<<"can u please type again?"<<"\n";
					answer2 = "0";
				}
				
			}while(answer2=="0");
		}	
		else
		{
			//wrong
			cout<<"can u please type again?"<<"\n";
			answer1='c';
			
		}		
			
	}while(answer1 == 'c');
	


	
	
	cout<<"this application will close in 5 seconds.";
	Sleep(5000);
	return 0;
}
