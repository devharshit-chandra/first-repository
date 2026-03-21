#include<iostream>
using namespace std;
class num{
    int a;
    int b;
    public:
    num(int x,int y){
        a=x;
        b=y;
    }
    void add(num &p){
        int real=this->a+p.a;
        int image=this->b+p.b;
        if(image>=0){
            cout<<real<<"+"<<image<<"i"<<endl;
        }
        else{
            cout<<real<<image<<"i"<<endl;
        }
    }
    void subtract(num &p){
        int real=this->a-p.a;
        int image=this->b-p.b;
        if(image>=0){
            cout<<real<<"+"<<image<<"i"<<endl;
        }
        else{
            cout<<real<<image<<"i"<<endl;
        }
    }
};
int main(){
    num alpha(-1,-3),beta(4,9);
    alpha.add(beta);
    alpha.subtract(beta);
}