#include <iostream>
using namespace std;

// Function to print numbers from 1 to n recursively
void printNumbers(int num) {
    if (num <= 0) {
        return; // stopping condition
    }

    // first call recursion
    printNumbers(num - 1);

    // then print current number
    cout << num << " ";
}

int main() {
    int limit;
    cout << "Enter any positive number: ";
    cin >> limit;

    cout << "Counting from 1 to " << limit << ":\n";
    printNumbers(limit);

    return 0;
}
