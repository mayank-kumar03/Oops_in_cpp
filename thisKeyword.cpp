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

     // Using 'this' keyword to access member variables
     cout << "Player Name: " << player1.name << endl;
     cout << "Player Age: " << player1.age << endl;

      // Creating another object of Cricketer using the constructor
      Cricketer player2("Virat Kohli", 35);

     cout << "Player Name: " << player2.name << endl;
     cout << "Player Age: " << player2.age << endl;

     return 0;
}
