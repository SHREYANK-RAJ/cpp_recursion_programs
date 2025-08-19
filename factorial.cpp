#include <iostream>
using namespace std;

// Function to calculate factorial using recursion
int findFactorial(int num) {
    // stopping condition
    if (num <= 1) {
        return 1;
    }
    // multiply current number with factorial of previous number
    return num * findFactorial(num - 1);
}

int main() {
    int number;
    
    cout << "Enter any number: ";
    cin >> number;

    // call the function
    int fact = findFactorial(number);

    // print result
    cout << "Factorial of " << number << " is: " << fact << endl;

    return 0;
}
