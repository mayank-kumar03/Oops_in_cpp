#include<iostream>
#include<string>
using namespace std;


/*
Access Modifiers in C++
1. Public: Members declared as public can be accessed from outside the class.
2. Private: Members declared as private cannot be accessed from outside the class.
3. Protected: Members declared as protected can be accessed in derived classes but not from outside the class.
4. Default Access Modifier: If no access modifier is specified, members are private by default in a class and public by default in a struct.
5. Friend Class: A friend class can access private and protected members of another class.

*/
// Example of private access modifier
class Student {
public:
      string name;
      int age;
      Student(int rollNo, string studentName, int studentAge) {
      rno = rollNo; // Can be accessed within the class
      name = studentName;
      age = studentAge;
}
       int getrno(){
            return rno;
       }
       void setrno(int r){
            rno=r;
       }
private:
      int rno; // Roll number is private and cannot be accessed outside this class



Student() {
      
}


};
int main() {
      Student s1(101, "John", 20); // Creating an object of Student class
      // s1.rno = 101; // Error: rno is private
      // s1.name = "John"; // Error: name is private
      // cout << s1.rno << " " << s1.name; // Error: cannot access private members
      cout<<s1.getrno()<<endl;
      s1.setrno(220164);
      cout<<s1.getrno()<<endl;
      
      return 0;
}     
