#include <iostream>
using namespace std;

// Printing numbers from 1 to n

void print(int x,int n) {
	
	if (n==x){
		cout << x;
	}
	else {
		cout <<x;
		print(x+1,n);
	}
}



int main() {

int n;

cout << " Enter the number ";
cin >> n;

print(1,n);

	return 0;
}
