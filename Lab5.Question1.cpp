#include <iostream>
using namespace std;

int power(int base,int exponent){
	
	if (exponent !=0){
		
		return (base*power(base,exponent-1));
	}
	else {
		return 1;
	}
}

int main() {

int base,exponent;

cout << " Enter the base number ";
cin >> base;

cout << " Enter the exponent ";
cin >> exponent;

cout << power(base,exponent) << endl;

	return 0;
}
