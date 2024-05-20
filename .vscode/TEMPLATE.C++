#include<iostream>
using namespace std;
template<class x>
class demo 
{
    private:
    x num1,num2;
    public:
    demo(x n1,x n2){
        num1=n1;
        num2=n2;
    }

void check()
{
    if(num1>num2){
        cout<<num1<<"is the largest no:"<<endl;
    }else{
        cout<<num2<<"is the largest no:"<<endl;
    }
}
};
int main(){
    demo<float>obj1(5,3);
    obj1.check();
    return 0;
}