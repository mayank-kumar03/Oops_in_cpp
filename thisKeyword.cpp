#include<iostream>
#include<string>
using namespace std;
class Cricketer {
public:
     string name;
     int age;

     Cricketer(string name, int age) { // Parameterized constructor
          this->name = name;
          this->age = age;
     }

     void print() {
          cout << "Name: " << name << ", Age: " << age << endl;
     }
};
/*
The 'this' keyword is a pointer that points to the current object of the class.
It is used to access the members of the class within its member functions.
In the above code, 'this->name' and 'this->age' are used to differentiate between the member variables and the parameters of the constructor.
When the constructor is called, the parameters 'name' and 'age' are passed, and 'this->name' and 'this->age' refer to the member variables of the class.
Using 'this' helps to avoid ambiguity when the parameter names are the same as the member variable


*/

int main() {
      // Creating an object of Cricketer using the constructor
      Cricketer player1("Sachin Tendulkar", 50);

     

      // Creating another object of Cricketer using the constructor
      Cricketer player2("Virat Kohli", 35);

      // Printing the details of the cricketers
      // player1.print();
      // player2.print();



      /*
      int a=4;
      int *ptr = &a; // Pointer to an integer
      cout << "Value of a: " << a << endl;
      cout << "Address of a: " << &a << endl;
      cout << "Value of ptr: " << ptr << endl;
      *ptr = 10; // Changing the value at the address pointed by ptr
      cout << "New value of a: " << a << endl;
      */
     return 0;
}
