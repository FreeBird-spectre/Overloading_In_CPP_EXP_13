//Abir Seth
// Entc A1
//PRN-24070123003

#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math m;

    cout << "Adding 2 numbers: " << m.add(9, 10) << endl;
    cout << "Adding 3 numbers: " << m.add(6, 12, 15) << endl;
    cout << "Adding decimals: " << m.add(9.5, 4.5) << endl;

    return 0;
}

Adding 2 numbers: 19
Adding 3 numbers: 33
Adding decimals: 14


=== Code Execution Successful ===
