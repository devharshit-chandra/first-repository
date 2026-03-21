#include<iostream>
using namespace std;
class person{
    public:
    int age;
    int id;
};
int main(){
    person p1;
    p1.age=25;
    p1.id=2;
    person p2=p1;
    p1.age=p1.age+4;
    cout<<p1.age<<","<<p1.id<<endl;
    cout<<p2.age<<","<<p2.id;
}