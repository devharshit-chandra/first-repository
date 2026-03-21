#include<iostream>
using namespace std;
class staticmember{
    int a;
    public:
    static int count;
    staticmember(){
        count=count+1;
    }
    staticmember(int a){
        this->a=a;
        count=count+1;
    }
    void display(){
        cout<<"a : "<<a<<endl;
    }
    static void disp(){
        cout<<count<<endl;
    }
};
int staticmember::count=0;
int main(){
    staticmember alpha(4),beta(6);
    staticmember gamma();
    staticmember::disp();
}