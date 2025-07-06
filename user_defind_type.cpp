#include<iostream>
#include<string>
using namespace std;
class Student{
public:
      string name;
      int rno;
      float gpa;
};

int main(){
      Student s;
      s.name="Mayank";
      cout<<"Enter roll number: ";
      // Input roll number from user

      cin>>s.rno;
      s.gpa=8.1;

      Student p;
      p.name="Keshav";
      p.rno=90;
      p.gpa=8;

      cout<<p.name<<endl;
      cout<<s.rno<<endl;
      cout<<s.name<<endl;




}
