#include<bits/stdc++.h>
using namespace std;
class Test{
      public:
      int a;
      static int count;
      Test(){
            a=1;
            count++;
      }
      int static getcount(){
            //a++;   static member function only access static data not other
            return count;
      }


};
int Test:: count=0;
int main(){
      cout<<Test::count<<endl;// return 0;
      Test t1,t2;
      cout<<t1.count<<endl;
      Test t3;
      cout<<Test::getcount()<<endl;
}