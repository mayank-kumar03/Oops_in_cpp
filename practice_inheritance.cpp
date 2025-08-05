#include<bits/stdc++.h>
using namespace std;
class Employee{
      private:
      int emid;
      string name;
      public:
      Employee(int id,string n){
            emid=id;
            name=n;
      }
      void setName(string name){
            this->name=name;
      }
      void setId(int id){
            emid=id;
      }
      int getId(){
            return emid;
      }
      string getName(){
            return name;
      }
};
class Private_Employee:public Employee{
      private:
      int wages;
      public:
      Private_Employee(int id,string name,int w):Employee(id,name){
            wages=w;

      }
            int getWages() {
                  return wages;
            }
};

int main(){
      Private_Employee p1(1,"John",300);
      cout << "Daily wage of " << p1.getName() << " is " << p1.getWages() << endl;
}
