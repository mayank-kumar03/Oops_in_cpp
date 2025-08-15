#include<bits/stdc++.h>
using namespace std;
class Base{
      public:
      void display(){
            cout<<"parent display"<<endl;
      }
};
class child:public Base{
      public:
      void display(int x){
            cout<<"child display"<<endl;
      }
};
int main(){
      child ch;
      ch.Base::display();
      ch.display(10)//this is not function overriding its a overloading

}