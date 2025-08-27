#include<bits/stdc++.h>
using namespace std;


int main(){
      vector<int>v={10,25,36,1,42,5,78};
      list<int>p={100,250,36,1,42,5,78};// here elemenstore in doubly linked list
      list<int>::iterator itr;
      cout<<"Display using iterator"<<endl;
      for(itr=p.begin();itr!=p.end();itr++){
            cout<<*itr<<" ";
      }
}