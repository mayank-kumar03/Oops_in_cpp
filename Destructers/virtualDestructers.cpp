#include<bits/stdc++.h>
using namespace std;


class Base{
public:
      Base(){
            cout<<"Base class constructer"<<endl;
      }
    virtual  ~Base(){
            cout<<"Base class destructers"<<endl;
      }

};
class Derived:public Base{
public:
      Derived(){
            cout<<"Derived class constructer"<<endl;
      }
      ~Derived(){
            cout<<"Derived class destructers "<<endl;

      }
};
int main(){
      // Base *b=new Derived();
      // delete b;
      Derived d;

}

/*
when declare base class destructer virtual then first derived class destructer is called;
*/