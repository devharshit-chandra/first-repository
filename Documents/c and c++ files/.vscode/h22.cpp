#include<iostream>
using namespace std;
class person{
    int a;
    int b;
    public:
    person(int m,int n){
        a=m;
        b=n;
    }
    person(const person &p){
        a=p.a;
        b=p.b;
    }
    void disp(){
        cout<<a<<":"<<b<<endl;
    }
};
int main(){
    person p1(5,6);
    person p2(p1);
    p1.disp();
    p2.disp();
}