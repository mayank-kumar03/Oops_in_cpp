#include<bits/stdc++.h>
using namespace std;

class Demo{
      private:
      int x=12;
      int y=19;

      public:
      void display ()const{
           // x++; when above you declare function const then it will modify any value;
            cout<<x<<" "<<y<<endl;
      }

};


int main1(){
      int a=9;
      const int b=1; 
      //int *ptr=&b;  this give an error youcant store address of const variable
      const int *ptr=&b; //it is possible but you cant modify variable;
      //++*ptr; this is not possible
      ptr=&a;//it is possible;
      //if you want to const pointer which does not move other variable then you have to write in this way;
      int * const c=&a;
     // c=&a; above c ponter is const pointer so it is not possible to reloacate;
     ++*c;  //value may update untill int const not define;
      a++;
      //b++; this give an error
      cout<<a<<endl;
      cout<<b<<endl;
     
}
int main(){
       Demo d;
      d.display();

}