#include<iostream>
using namespace std;
class person{
    int age;
    public:
    person(int a){
        age=a;
    }
    friend void display(person &p);
};
void display(person &p){
    cout<<p.age<<endl;
}
int main(){
    person p1(25),p2(30);
    display(p1);
    display(p2);
}