#include<bits/stdc++.h>
using namespace std;
int division(int a,int b){
      if(b==0) throw 1;
      return a/b;
}


int main(){
      int a=9,b=0,c;
      try{
            
      c=division(a,b);
      cout<<c<<endl;

      }catch(int e){
            cout<<"division by zero "<<e<<endl;
      }
      cout<<"end program "<<endl;
      
}