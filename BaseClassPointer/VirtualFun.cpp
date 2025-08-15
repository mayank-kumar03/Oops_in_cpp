#include<bits/stdc++.h>
using namespace std;
class Base{
      public:
    virtual  void display(){ // if declare this fun virtual then base class pointer run child class overided fun;
            cout<<"parent display"<<endl;
      }
};
class child:public Base{
      public:
      void display(){
            cout<<"child display"<<endl;
      }
};
int main(){
      Base *ptr=new child();
      ptr->display();

}