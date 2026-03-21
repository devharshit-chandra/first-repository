#include<iostream>
using namespace std;
class person{
    int age;
    public:
    person(int a){
        age=a;
    }
    friend class student;
};
class student{
    public:
    void disp(person &p){
        cout<<p.age<<endl;
    }
};
int main(){
    person p1(25),p2(12);
    student s1;
    s1.disp(p1);
    s1.disp(p2);
}