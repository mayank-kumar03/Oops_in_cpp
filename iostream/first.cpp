#include<bits/stdc++.h>
using namespace std;

int main(){
      ofstream ofs("my.txt",ios::trunc);
      ofs<<"hello "<<endl;
      ofs<<12345<<endl;
      ofs.close();
      ofstream cfs("my.txt",ios::app);
      cfs<<"ravi"<<endl;
}