#include<bits/stdc++.h>
using namespace std;
/*
Destructer is used for free the resources,in one class only one destructer.
if you create an object dynamically then only constructer called when you put delete object then destructer is called;
*/


class Demo{
public:
 int n;
 int *p;
      Demo(){
            p =new int[10];
            cout<<"Constructer of demo"<<endl;
      }
      ~Demo(){
            delete []p;
            cout<<"Destructer is called"<<endl;
      }

};
void fun(){
      //Demo  *d=new Demo();
      Demo d;
      //delete d;
      d.n=1;
      cout<<d.n<<endl;
}

      int main(){
      fun();
}

