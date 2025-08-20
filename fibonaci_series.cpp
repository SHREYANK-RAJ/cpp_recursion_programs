#include <iostream>
using namespace std;

// Function to calculate Fibonacci number recursively
int getFibonacci(int term) {
    // Base cases
    if (term <= 1) {
        return term;
    }

    // Recursive case
    return getFibonacci(term - 1) + getFibonacci(term - 2);
}

int main() {
    int index;

    cout << "Enter the position (n) of Fibonacci series: ";
    cin >> index;

    cout << "Fibonacci number at position " << index << " is: " 
         << getFibonacci(index) << endl;

    return 0;
}
