#include<bits/stdc++.h>
using namespace std;
class Student{
      public:
      int rollno;
      int static admission;
      string name;
      Student(string n){
            admission++;
            rollno=admission;

            name=n;
      }
      void display(){
            cout<<"name: "<<name<<" roll No: "<<rollno<<endl;
      }
      
};
int Student :: admission=0;
int main(){
      Student st1("Ravi"),st2("Rohan");
      st1.display();
      st2.display();

}