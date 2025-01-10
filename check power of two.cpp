#include<iostream>
using namespace std;

int main(){
	int checkin;	
	cout << "enter a number to check if its a power of 2" << " " ;
	cin >> checkin;
	
	cout <<  endl;	

	if ((checkin & checkin-1) == 0 ){
		cout << "Yes its a power of two" << endl;
	}
	else {
		cout << "No its not a power of two" << endl;
	}

}

