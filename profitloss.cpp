#include<iostream>
using namespace std;

int main(){
    int sp, cp;
    cout<<"Enter selling price:";
    cin>>sp;
    cout<<"Enter cost price: ";
    cin>>cp;

    if(sp>cp){
        int profit = sp-cp;
        cout<<"your profit is: "<<profit<<endl;
    }
    else if(cp>sp){
        int loss = cp-sp;
        cout<<"your loss is: "<<loss<<endl;
    }
    else{
        cout<<"NO profit or loss"<<endl;
    }
}