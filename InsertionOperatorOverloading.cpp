#include<bits/stdc++.h>
using namespace std;

class InsertionOperatorOverloading {
public:     
      string name;
      int age;
      float gpa;

      // Constructor to initialize the attributes
      InsertionOperatorOverloading(string n, int a, float g) {
            name = n;
            age = a;
            gpa = g;
      }

      // Overloading the << operator for insertion
      friend ostream& operator<<(ostream &o, const InsertionOperatorOverloading &obj) {
            o << "Name: " << obj.name << ", Age: " << obj.age << ", GPA: " << obj.gpa;
            return o;
      }
};

int main() {
      // Creating an object of InsertionOperatorOverloading
      InsertionOperatorOverloading student("Alice", 20, 3.8);
      
      // Using the overloaded << operator to display student information
      cout << student << endl;
      // Creating another object
      InsertionOperatorOverloading student2("Bob", 22, 3.5);
      operator<<(cout, student2) << endl; // Using the overloaded << operator to display student2 information

      return 0; // Return success
}