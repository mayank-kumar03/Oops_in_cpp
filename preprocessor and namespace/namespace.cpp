#include<bits/stdc++.h>


namespace first{
      void fun(){
      std::cout<<"first"<<std::endl;
}

}
namespace second{
      void fun(){
     std:: cout<<"second"<<std::endl;
}

}
using namespace second;
int main(){
     first:: fun();
     fun();
}
