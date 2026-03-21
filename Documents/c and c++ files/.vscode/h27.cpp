#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){}
    number(int a){
        this->a=a;
    }
    number operator+(number n){
        number n1;
        n1.a=this->a+n.a;
        return n1;
    }
    void disp(){
        cout<<a<<endl;
    }
};
int main(){
    number num1(5),num2(10);
    number num3;
    num3=num1+num2;
    num3.disp();
}