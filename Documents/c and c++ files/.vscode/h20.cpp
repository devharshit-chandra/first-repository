#include<iostream>
using namespace std;
class person{
    public:
    static int c;
};
int person::c=27;
int main(){
    person p1,p2,p3;
    cout<<p1.c<<endl<<p2.c<<endl<<p3.c<<endl;
    cout<<person::c;
}