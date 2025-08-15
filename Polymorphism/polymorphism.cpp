#include<bits/stdc++.h>
using namespace std;


class Car{
      public:
      virtual void start()=0;
      virtual void stop()=0;

};
class Inova:public Car{
      
      void start(){
            cout<<"innova started"<<endl;
      }
      void stop(){
            cout<<"innova stoped"<<endl;
      }

};
int main(){
      //Car c;  it gives error because varriable of abstract class can not be create;
      Car *p=new Inova();
      p->start();
      p->stop();
}