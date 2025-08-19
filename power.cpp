#include <iostream>
using namespace std;

int findPowerOfTwo(int exponent) {
    // stopping condition
    if (exponent <= 0) {
        return 1;
    }
    // keep reducing the exponent
    int smallerResult = findPowerOfTwo(exponent - 1);
    return 2 * smallerResult;
}

int main() {
    int num;
    cout << "Enter exponent for power of 2: ";
    cin >> num;

    cout << "2 raised to " << num << " = " << findPowerOfTwo(num) << endl;

    return 0;
}
