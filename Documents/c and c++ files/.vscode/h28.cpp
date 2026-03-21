#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    complex(){
    }
    complex(int a,int b){
        this->a=a;
        this->b=b;
    }
    complex operator+(complex n){
        complex num;
        num.a=this->a+n.a;
        num.b=this->b+n.b;
        return num;
    }
    complex operator-(complex n){
        complex num;
        num.a=this->a-n.a;
        num.b=this->b-n.b;
        return num;
    }
    complex operator*(complex n){
        complex num;
        int x=(this->a*n.a)+((this->b*n.b)*-1);
        int y=(this->a*n.b)+(this->b*n.a);
        num.a=x;
        num.b=y;
        return num;
    }
    void disp(){
        if(b>=0){
            cout<<a<<"+"<<b<<"i"<<endl;
        }
        else{
            cout<<a<<b<<"i"<<endl;
        }
    }
};
int main(){
    complex n1(1,-2),n2(5,8);
    complex n3=n1+n2;
    n3.disp();
    complex n4(-2,-3),n5(7,4);
    complex n6=n4-n5;
    n6.disp();
    complex n7(-3,5),n8(-2,6);
    complex n9=n7*n8;
    n9.disp();
}