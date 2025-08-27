#include<bits/stdc++.h>
using namespace std;

int main(){
      ifstream infile;
      infile.open("my.txt");
      if(!infile.is_open()){
            cout<<"file is not open"<<endl;
      }
      string str;
      int n;
      infile>>str;
      infile>>n;
      cout<<str<<" "<<n<<endl;
      if(infile.eof()) cout<<"file read completly..."<<endl;
}