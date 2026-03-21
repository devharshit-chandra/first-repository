#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){}
    number(int a){
        this->a=a;
    }
    number operator--(int){//postfix
        number t;
        t.a=this->a;
        this->a=this->a-1;
        return t;
    }
    number operator--(){//prefix
        number t;
        this->a=this->a-1;
        t.a=this->a;
        return t;
    }
    void display(){
        cout<<"a="<<a<<endl;
    }
};
int main(){
    number n1(89),n2;
    n2=--n1;
    n1.display();
    n2.display();
    n2=n1--;
    n1.display();
    n2.display();
}