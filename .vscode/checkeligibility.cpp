#include<iostream>
using namespace std;

bool checkeligiblity(int age, int limit){
    if(age>=limit){
        return true;
    }else{
        return false;
    }
}
int main(){
   int voting_limit = 18;
   int is_eligible_for_voting = checkeligiblity(21,voting_limit);
   if(is_eligible_for_voting){
    cout<<"yes, the current person is eligible to voite";
   }else{
    cout<<"no, the current person is not eligible to vote";
   }
   return 0;
}