#include<bits/stdc++.h>
using namespace std;
class Student {
public:
     int a;
     int *p;
      
      // Parameterized constructor
      Student(int x ) {
            a = x;
            p = new int[a]; // Dynamically allocate memory for p
      }
      // Copy constructor
      Student(const Student &s) {
            a = s.a;
           p=new int[a];// Allocate new memory for p this is a deep copy
            for (int i = 0; i < a; i++) {
                  p[i] = s.p[i]; // Copy the values from the source object
            }
            
      }
      // Destructor
      ~Student() {
            delete[] p; // Free the allocated memory
      }

};

      // Destructor to free allocated memory
      
int main() {
      Student s1(5); // Create an object of Student
      cout << "Value of a in s1: " << s1.a << endl; // Output the value of a
      cout << "Address of p in s1: " << s1.p << endl; // Output the address stored in p
      
      // Creating another object using the copy constructor
      Student s2(s1); // Copy constructor is called here
      cout << "Value of a in s2: " << s2.a << endl; // Output the value of a in s2
      cout << "Address of p in s2: " << s2.p << endl; // Output the address stored in p
      
      return 0; // Return success
}




// difference between shallow copy and deep copy
// Shallow copy: Copies the values of the member variables, but does not create a new copy of dynamically allocated memory. Both objects share the same memory location.
// Deep copy: Creates a new copy of the dynamically allocated memory, ensuring that each object has its own separate copy of the data. Changes made to one object do not affect the other object.
// In this code, the copy constructor performs a deep copy by allocating new memory for the pointer `p` and copying the values from the source object `s`. This ensures that `s1` and `s2` have their own separate copies of the dynamically allocated memory, preventing any unintended side effects when modifying one of the objects.
// The destructor is used to free the allocated memory when the object goes out of scope, preventing memory leaks. When `s1` and `s2` are destroyed, their destructors will be called, and the memory allocated for `p` will be freed properly. This is crucial in C++ to manage dynamic memory effectively.
// The code demonstrates the concept of deep copy in C++ using a copy constructor and destructor to manage dynamic memory allocation and deallocation. It ensures that each object has its own separate copy of the data, preventing issues related to shared memory locations. The destructor is essential for cleaning up the allocated memory when the objects are no longer needed, thus avoiding memory leaks.
