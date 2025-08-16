#include<bits/stdc++.h>
using namespace std;
class outer{
      
      public:
      void fun(){
            i.display();
      }
      class inner{
            public:
            void display(){
                  cout<<"inner class"<<endl;
            }
      };
      inner i;
};
int main(){
      outer::inner i;
      i.display();
}