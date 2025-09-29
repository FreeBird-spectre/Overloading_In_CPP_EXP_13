//Abir Seth
//Entc A1
//PRN-24070123003
#include <iostream>
using namespace std;

class Calculator {
public:
    
    void add() {
        cout << "No numbers to add. Sum is 0." << endl;
    }

    void add(int a, int b) {
        cout << "Sum of two integers: " << a + b << endl;
    }

    void add(double a, double b) {
        cout << "Sum of two decimals: " << a + b << endl;
    }

    void add(int a, int b, int c) {
        cout << "Sum of three integers: " << a + b + c << endl;
    }
};

int main() {
    Calculator calc;

    calc.add();                      
    calc.add(10, 27);                
    calc.add(5.5, 4.5);              
    calc.add(1, 2, 5);              

    return 0;
}

No numbers to add. Sum is 0.
Sum of two integers: 37
Sum of two decimals: 10
Sum of three integers: 8


=== Code Execution Successful ===
