#include<iostream>
using namespace std;

int main(){
    int n1 , n2;
    cout<<"Enter 2 integers: ";
    cin>>n1>>n2;

    cout<<"Enter an operator(+,-,*,/,%)";
    char op;
    cin>>op;

    switch (op){
        case '+':
        cout<<"sum is :"<<n1+n2<<endl;
        break;
        case '-':
        cout<<"Difference is :"<<n1-n2<<endl;
        break;
        case '*':
        cout<<"product is :"<<n1*n2<<endl;
        break;
        case '/':
        cout<<"division is :"<<n1/n2<<endl;
        break;
        case '%':
        cout<<"Reminder is :"<<n1%n2<<endl;
        break;
        default:
        cout<<"Enter a valid operator :"<<endl;
        break;
        
        
        
        
    }
}