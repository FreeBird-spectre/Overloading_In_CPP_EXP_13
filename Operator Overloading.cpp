//Abir Seth
//Entc A1
//PRN-24070123003

#include <iostream>
using namespace std;

class Complex {
    int real, imag;  

public:
    
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(19, 24);
    Complex c2(2, 4);
    Complex c3 = c1 + c2;

    c3.display();
    return 0;
}

21 + 28i


=== Code Execution Successful ===
