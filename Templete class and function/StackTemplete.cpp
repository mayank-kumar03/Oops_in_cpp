#include<bits/stdc++.h>
using namespace std;

template <class T>
class Stack{
private:
      T *stk;
      int top;
      int size;
public:
     Stack(int sz){
      size=sz;
       stk=new T[size];
       top=-1;

     }
     int gettop(){
      return top;
     }
     void push(T x);
     T pop();


};
template <class T>
void Stack<T>::push(T x){
      if(top==size-1) cout<<"stack overflow";
      else{
            top=top+1;
            stk[top]=x;
      }
}
template <class T>
T Stack<T>::pop(){
      T v=0;
      if(top==-1) cout<<"stack underflow"<<endl;
      else{
             v=stk[top];
            top=top-1;
           
      }
       return v;
}
int main(){
      Stack<int> s(4);
      s.pop();
      s.push(5);
      s.push(2);
      cout<<s.gettop()<<endl;
      Stack<char> s1(4);
      s1.pop();
      s1.push('A');
      s1.push('B');
      cout<<s1.pop()<<endl;
      cout<<s.gettop()<<endl;

}


/*
Template Class:

Allows you to create a class to work with any data type.
Syntax: template <class T> class ClassName { ... };
T is a placeholder for a data type (can be int, char, float, etc.).
Example: Stack<int> s; or Stack<char> s1;
Template Function:

Allows you to write a function that works with any data type.
Syntax: template <class T> T functionName(T arg) { ... }
Reduces code duplication for similar operations on different types.
Benefits:

Code reusability.
Type safety.
Flexibility.
*/