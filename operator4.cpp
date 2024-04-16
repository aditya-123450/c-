#include<iostream>
using namespace std;

int main (){
    int c=6;
    cout<<(c++)<<endl;//6
    int b=5;
    cout<<(--b)<<endl; //4

    int d=6;
    cout<<(d++)<<endl;//6
    int e=d+5;
    cout<<(e)<<endl; //12
    return 0;
}
