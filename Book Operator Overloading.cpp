//Abir Seth
//Entc A1
//PRN-24070123003

#include <iostream>
using namespace std;

class Book {
    string title;
    int pages;

public:
    Book(string t = "", int p = 0) {
        title = t;
        pages = p;
    }

    Book operator-(Book b) {
        return Book(title + " & " + b.title, pages + b.pages);
    }

    void show() {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};

int main() {
    Book b1("C++", 100);
    Book b2("Python", 150);

    Book b3 = b1 - b2; 

    b1.show();
    b2.show();
    b3.show();

    return 0;
}

Title: C++, Pages: 100
Title: Python, Pages: 150
Title: C++ & Python, Pages: 250


=== Code Execution Successful ===
