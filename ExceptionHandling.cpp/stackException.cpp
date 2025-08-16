#include<iostream>
 using namespace std;
 class StackOverFlow:exception{};
 class StackUnderFlow:exception{};
 class Stack
 {
 public:
    int *stk;
    int top=-1;
    public:
    int size;
 public:
    Stack(int sz)
    {
        size=sz;
        stk=new int[size];
    }
    void push(int x)
    {
        if(top==size-1)
            throw StackOverFlow();
        top++;
        stk[top]=x;
        cout<<x<<" is pushed on the stack"<<endl;
    }
    int pop()
    {
        if(top==-1)
            throw StackUnderFlow();
        return stk[top--];
    }
 };
 int main()
 {
    Stack s(5);
    
   try{
       s.push(2);
    s.push(3);
    s.push(4);
    s.push(10);
    s.push(9);
    //s.push(8);// this part of code give an exception of stack overflow
    cout<<s.pop()<<endl;
    s.pop();
   }catch(StackOverFlow e){
      cout<<"stack is full now"<<endl;
   }catch(StackUnderFlow e){
      cout<<"stack is underflow now"<<endl;
   }
   cout<<"size of the stack: "<<s.top<<endl;
   cout<<"all operation done"<<endl;
 }