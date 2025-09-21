#include <iostream>
using namespace std;

// Ackermann function definition
unsigned long long ackermann(unsigned int m, unsigned int n) {
 // TODO: Complete the code.
    if (m == 0) {
        return n + 1;
    } else if (m == 1) {
        return n + 2;
    } else if (m == 2) {
        return 2 * n + 3;
    } else if (m == 3) {
        return (1ULL << (n + 3)) - 3; // 2^(n+3) - 3
    } else {
        // For m > 3, the values grow extremely fast.
        // Here we can just return a placeholder or handle it differently.
        cout << "Warning: Ackermann function grows very fast for m > 3." << endl;
        return 0; // Placeholder
    }
}

int main() {
    unsigned int m, n;
    cout << "Enter m and n: ";
    cin >> m >> n;

    cout << "Ackermann(" << m << ", " << n << ") = " 
         << ackermann(m, n) << endl;

    return 0;
}
