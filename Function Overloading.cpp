//Abir Seth
//Entc A1
//PRN-24070123003

#include <iostream>
using namespace std;

class User {
public:
    void show(string name) {
        cout << "Name: " << name << endl;
    }

    void show(string name, int age) {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
    
    void show(string name, string city) {
        cout << "Name: " << name << ", City: " << city << endl;
    }

    void show(string name, int age, string city) {
        cout << "Name: " << name << ", Age: " << age << ", City: " << city << endl;
    }
};

int main() {
    User person;

    person.show("Abir");
    person.show("Abir", 19);
    person.show("Abir", "Pune");
    person.show("Abir", 19, "Pune");

    return 0;
}

Name: Abir
Name: Abir, Age: 19
Name: Abir, City: Pune
Name: Abir, Age: 19, City: Pune


=== Code Execution Successful ===
