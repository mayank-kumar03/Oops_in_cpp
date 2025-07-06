#include<iostream>
#include<string>
using namespace std;
class Student{
public:     
      string name;
      int age;
      float gpa;
      
      // Constructor to initialize the attributes

      /*
      Constructor is a special member function that is automatically called when an object of the class is created.
      It is used to initialize the attributes of the class.
      The constructor has the same name as the class and does not have a return type.
      Here, we define a constructor that takes three parameters: name, age, and gpa
      and initializes the corresponding attributes of the Student class.

      Main Types of Constructors:
      1. Default Constructor: A constructor that does not take any parameters.      
      2. Parameterized Constructor: A constructor that takes parameters to initialize the attributes of the class.
      3. Copy Constructor: A constructor that creates a new object as a copy of an existing object.
      4. Move Constructor: A constructor that transfers resources from one object to another.   
       Destructor: A special member function that is called when an object is destroyed.






      */
      Student(string n, int a, float g) {
            name = n;
            age = a;
            gpa = g;
      }
      
      // Method to display student information
      void display() {
            cout << "Name: " << name << ", Age: " << age << ", GPA: " << gpa << endl;
      }
      };

int main() {
      // Creating an object of Student using the constructor
      Student student1("Alice", 20, 3.8);
      Student student2("Bob", 22, 3.5);
      student1.display();
      student2.display();
}
