#include <iostream>
using namespace std;

int lcm(int numOne, int numTwo, int y) {
    if (numOne % numTwo == 0) {
        return numOne;
    }
    else if (numTwo % numOne == 0) {
        return numTwo;
    }
    else {
        if (y % numOne == 0 && y % numTwo == 0) {
            return y;
        }
        else {
            return lcm(numOne, numTwo, y+1);
        }
    }
}

int main() {
    
    int numOne, numTwo, y;
    
    cout << "Enter first number: ";
    cin >> numOne;
    cout << "Enter second number: ";
    cin >> numTwo;
    
    if (numOne > numTwo) {
        y = numOne;
    }
    else {
        y = numTwo;
    }
    cout << "The lowest common multiple of the two numbers is " << lcm(numOne, numTwo, y) << endl;
    
    return 0;
}

