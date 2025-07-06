#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Show from Base class" << endl;
    }
    virtual void display() {
        cout << "Display from Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Show from Derived class" << endl;
    }
    void display() override {
        cout << "Display from Derived class" << endl;
    }
};

int main() {
    Base b;
    Derived d;
    Base* ptr;

    cout << "Calling using Base object:" << endl;
    b.show();
    b.display();

    cout << "\nCalling using Derived object:" << endl;
    d.show();
    d.display();

    cout << "\nCalling using Base pointer to Derived object:" << endl;
    ptr = &d;
    ptr->show();      // Calls Base::show() (not virtual)
    ptr->display();   // Calls Derived::display() (virtual)

    return 0;
}