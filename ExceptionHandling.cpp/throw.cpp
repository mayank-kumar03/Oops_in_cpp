#include<bits/stdc++.h>
using namespace std;

class MyException:public exception{

};

int division(int a,int b) throw(MyException){
      if(b==0)
         throw MyException();
      return a/b;
}
int main(){
      int a,b,c;
      cout<<"enter value of a and b: "<<endl;
      cin>>a>>b;
      try{
            c=division(a,b);
            cout<<"c value: "<<c<<endl;
      }catch(MyException e){
            cout<<"division by zero"<<endl;
      }
      cout<<"end of program"<<endl;
}