#include<bits/stdc++.h>
using namespace std;
class Base{
      public:
      void fun1(){
            cout<<"fun1 from base class"<<endl;
      }
};
class Derived:public Base{
      public:
      void fun2()
{
      cout<<"fun2 from derived class"<<endl;
}
};
int main(){
      Derived d;
      Base *ptr=&d;
      ptr->fun1();
      //ptr->fun2(); it will give error because pointer from base class we cant accecc child class fun;
      d.fun2();
}