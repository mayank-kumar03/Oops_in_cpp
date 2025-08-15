#include<bits/stdc++.h>
using namespace std;
class Main;
class Test{
      public:
      int a;
      protected:
      int b;
      private:
      int c;
friend void fun();
friend Main;
};

void fun(){
      Test t;
      t.a=1;
      t.b=2;
      t.c=3;

}
class Main{
      public:
      void fun1(){
            Test t;
            t.a=1;
            t.b=2;
            t.c=3;
            cout<<t.a<<endl;
            cout<<t.b<<endl;
            cout<<t.c<<endl;
      }

};
int main(){
      fun();
      Main m;
      m.fun1();
}