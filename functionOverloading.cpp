#include<iostream>
using namespace std;
class Loading{
      public:
           int sum(int a,int b){
            return a+b;
           }
           int sum(int a,int b,int c){
            return a+b+c;

           }
};


int main(){
      Loading a;
      cout<<a.sum(5,6)<<endl;
      cout<<a.sum(1,2,3)<<endl;
}




/*
### Polymorphism in C++

**Definition:**  
Polymorphism means "many forms." In C++, it allows objects to be treated as instances of their parent class rather than their actual derived class. It enables one interface to be used for a general class of actions.

---

#### Types of Polymorphism

1. **Compile-Time Polymorphism (Static Binding)**
   - Achieved using **function overloading** and **operator overloading**.
   - The function to be invoked is determined at compile time.
   - **Example:**
     ```cpp
     class Example {
     public:
         void show(int a) { cout << "a: " << a << endl; }
         void show(double b) { cout << "b: " << b << endl; }
     };
     ```

2. **Run-Time Polymorphism (Dynamic Binding)**
   - Achieved using **inheritance** and **virtual functions**.
   - The function to be invoked is determined at run time.
   - **Example:**
     ```cpp
     class Base {
     public:
         virtual void display() { cout << "Base" << endl; }
     };
     class Derived : public Base {
     public:
         void display() override { cout << "Derived" << endl; }
     };
     ```

---

#### Key Concepts

- **Function Overloading:** Same function name, different parameters.
- **Operator Overloading:** Same operator, different meanings based on operands.
- **Virtual Functions:** Functions declared with `virtual` keyword in base class, overridden in derived class.
- **Pure Virtual Functions:** Declared by assigning 0 in base class, making the class abstract.

---

#### Example: Run-Time Polymorphism

```cpp
class Animal {
public:
    virtual void sound() { cout << "Animal sound" << endl; }
};
class Dog : public Animal {
public:
    void sound() override { cout << "Bark" << endl; }
};
int main() {
    Animal* a;
    Dog d;
    a = &d;
    a->sound(); // Output: Bark
    return 0;
}
```

---

**Summary:**  
Polymorphism increases flexibility and reusability in code by allowing the same interface to represent different underlying forms (data types).
*/