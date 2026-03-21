#include<iostream>
using namespace std;
class number{
    int i;
    public:
    number(int i){
        this->i=i;
    }
    int add(const number &a){
        int b=this->i+a.i;
        return b;
    }
};
int main(){
    number a(55),b(75);
    int c=a.add(b);
    cout<<c;
}