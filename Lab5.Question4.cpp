#include <iostream>
using namespace std;

// Finding the sum of two numbers

int sum (int number){
	
	if (number==0){
		
		return 0;
	}
	else {
		return (number+sum(number-1));
	}
}

int main() {

int number;

cout << " Enter the number \n";
cin >>number;

cout << " Sum of the numbers is " << sum(number);

	return 0;
}
