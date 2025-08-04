#include<bits/stdc++.h>
using namespace std;
class Complex {  
      private:
      int real;
      int imag;
       

public:
     
      // Constructor to initialize the complex number
      Complex(int r=0, int i=0){
            this->imag=i;
            this->real=r;
      }
      
      // Overloading the + operator to add two complex numbers
      Complex add(const Complex &other) {
            Complex temp;
            temp.real = this->real + other.real; // Add real parts
            temp.imag = this->imag + other.imag; // Add imaginary parts
            return temp;
      }

      //  Complex operator+(const Complex &other) {
      //       Complex temp;
      //       temp.real = this->real + other.real; // Add real parts
      //       temp.imag = this->imag + other.imag; // Add imaginary parts
      //       return temp;
      // }

      // using friend function
     friend Complex operator+( Complex other,Complex first);

      
      // Method to display the complex number
      void display() {
            cout << real << " + " << imag << "i" << endl;
      }
      };
       Complex operator+( Complex other,Complex first) {
            Complex temp;
            temp.real = first.real + other.real; // Add real parts
            temp.imag = first.imag + other.imag; // Add imaginary parts
            return temp;
      }
int main() {
      Complex c1(3, 4); // Create first complex number
      Complex c2(1, 2); // Create second complex number
      cout << "First complex number: ";
      c1.display(); // Display first complex number
      cout << "Second complex number: ";
      c2.display(); // Display second complex number
      Complex c3 = c1.add(c2); // Add two complex numbers using overloaded + operator
      // Complex c3 = c1 + c2; // Alternatively, if operator overloading is implemented
      // c3 = c1 + c2; // This line would work if operator over
      cout << "Sum of complex numbers: ";
      c3.display(); // Display the result
      Complex c4 = c1 + c2; // Using operator overloading
      cout << "Sum using operator overloading: ";
      c4.display(); // Display the result using operator overloading
      return 0; // Return success
}