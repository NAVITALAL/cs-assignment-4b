#include<iostream>
using namespace std;

//Reversing of a number

int r,s=0;

int reverse(int n){ 
	
	if (n>=1){
	  r=n%10;
              s=s*10+r;
              reverse(n/10);
            }

	else{
	return s;
	}
}
int main(){
	
int x;

cout << " Enter the positive integer\n " << endl;
cin>> x;

cout<<" Reverse of the number is "<<reverse(x);

	return 0;
}
