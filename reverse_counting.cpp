#include<iostream>
using namespace std;

void counting(int n) {
    // base case
    if (n==0) {
        return ;
    }
    
    cout << n << endl;   // print first

    // recursive relation
    counting(n-1);       // then call recursively
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    counting(n);

    return 0;
}
