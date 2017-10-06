#include <iostream>
using namespace std;
 
int sum(int n){
 
	if (n==1 || n==0){
		return n;
	}
	else {
		return n+sum(n-2);
	}
} 
 
int main() {
 
int n;
 
cout << " Enter the positive integer\n ";
cin >> n;
 
cout << sum(n) << endl;
 
	return 0;
}
