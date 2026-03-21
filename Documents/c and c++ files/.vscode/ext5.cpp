#include<iostream>
using namespace std;
class person{
    public:
    int *roll;
    string *name;
    person(int r,string s){
        roll=new int(r);
        name=new string(s);
    }
    person(person &a){
        roll=new int(*(a.roll));
        name=new string(*(a.name));
    }
    void display(){
        cout<<*name<<":"<<*roll<<endl;
    }
};
int main(){
    person p1(1,"harry");
    person p2(p1);
    *(p1.roll)=2;
    *(p1.name)="ken";
    p1.display();
    p2.display();
}