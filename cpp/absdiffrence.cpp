//program to calculate absolute difference between two number.

#include <iostream>
using namespace std;

int main() {
    int n, m;
    // Read the two numbers from STDIN
    cin >> n >> m;
    // Store the difference between them in result
    int result = n - m;

    // If result is negative multiply it with -1
    if(result < 0) {
        result = result*(-1);
    }

    // Print the result to STDOUT
    cout << result;
    return 0;
}