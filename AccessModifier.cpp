#include<bits/stdc++.h>
using namespace std;
class Parent{
      private: int a;
      protected: int b;
      public :int c;
      void display(){
            a=1;
            b=2;
            c=3;
      }
};
class Child:public Parent{
      void display(){
            //a=5;
            b=6;
            c=7;
      }
};
class GrandChild:protected Child{
      void display(){
           // a=11;
            b=19;
            c=55;
      }
};
int main(){
      GrandChild g1;
     // g1.a=55;
      //g1.b=45;
      //g1.c=55;
}

// write notes about above program
// The program demonstrates the use of access modifiers in C++ inheritance.
// It defines three classes: Parent, Child, and GrandChild, each with different access levels for their members.
// The Parent class has three members: a (private), b (protected), and c (public).
// The Child class inherits from Parent publicly, allowing it to access the protected member b and the public member c, but not the private member a.
// The GrandChild class inherits from Child with protected access, meaning it can access the protected member b and the public member c, but not the private member a from Parent or the public member c from Child.
// In the main function, an instance of GrandChild is created, but it cannot access any of the members a, b, or c directly due to the access restrictions imposed by the inheritance and access modifiers.