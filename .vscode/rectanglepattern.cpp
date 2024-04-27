#include<iostream>
using namespace std;

int main(){

   int starrows, starcols;
   cout<<"please enter the number of star rows";
   cin>>starrows;

   cout<<"please enter the number of star cols";
   cin>>starcols;

   for(int line = 1; line <= starrows; line++){
    for(int j = 1; j<= starcols; j++){
        cout<<"*";
    }
    cout<<"\n";
   }

    return 0;
}