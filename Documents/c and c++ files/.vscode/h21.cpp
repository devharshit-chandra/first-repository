#include<iostream>
using namespace std;
class person{
    const string n;
    const int a;
    public:
    person(int m,string s):a(m),n(s){
    }
    void display(){
        cout<<a<<":"<<n<<endl;
    }
};
int main(){
    person p1(50,"fifty");
    p1.display();
}