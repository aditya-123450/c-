#include<iostream>
using namespace std;

int main(){

  
  int i=5;//loop variable
  while(true){
    
    if(i%7==0){
        cout<<i<<endl;
        break;
    }
    i+=5;
  }
}