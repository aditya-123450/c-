#include<iostream>
using namespace std;

int main(){
    char alphabet;
    cout<<"Enter an alphabet: ";
    cin>>alphabet;

    switch(alphabet){
        case 'a':
        cout<<"it is a vowel"<<endl;
        case 'e':
        cout<<"it is a vowel"<<endl;
         case 'i':
        cout<<"it is a vowel"<<endl;
         case 'o':
        cout<<"it is a vowel"<<endl;
         case 'u':
        cout<<"it is a vowel"<<endl;
        break;
        default:
        cout<<"it is a consonant"<<endl;
    }
}