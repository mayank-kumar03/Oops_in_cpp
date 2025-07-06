#include<iostream>
#include<string>
using namespace std;
class Student{
public:
      string name;
      int age;
      float gpa;
      
      
      Student(string n, int a, float g) {//parameterized constructor
            name = n;
            age = a;
            gpa = g;
      }

      void display() {
            cout << "Name: " << name << ", Age: " << age << ", GPA: " << gpa << endl;
      
      }
      };

      /*
      object pointer is a pointer that points to an object of a class.
      It is used to access the members of the class using the pointer.




      */

      int main() {
            // Creating an object of Student using the constructor
            Student student1("Alice", 20, 3.8);
            Student student2("Bob", 22, 3.5);
            student1.display();
            student2.display();

            Student*ptr=&student1; // Pointer to an object of Student
            cout << "Pointer to student1: " << ptr << endl;
            cout << "Name of student1 using pointer: " << ptr->name << endl;
            cout << "Age of student1 using pointer: " << ptr->age << endl;


      }