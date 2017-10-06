
#include <iostream>
using namespace std;

int hcf(int numOne, int numTwo, int y) {
    if (numOne % numTwo == 0) {
        return numTwo;
    }
    else if (numTwo % numOne == 0) {
        return numOne;
    }
    else {
        if (numOne % y == 0 && numTwo % y == 0) {
            return y;
        }
        else {
            return hcf(numOne, numTwo, y-1);
        }
    }
}

int main() {
    int numOne, numTwo, y;
    cout << "Enter first number: ";
    cin >> numOne;
    cout << "Enter second number: ";
    cin >> numTwo;
    
    if (numOne > numTwo)
        y = numTwo;
    else
        y = numOne;
    
    cout << "The highest common factor of the two numbers is " << hcf(numOne, numTwo, y) << endl;
    return 0;
}
