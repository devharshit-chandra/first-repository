#include<iostream>
using namespace std;
class person{
    int id; 
    string name;
    public:
    void set(int id,string name){
        this->id=id;
        this->name=name;
    }
    void get(){
        cout<<id<<":"<<name<<endl;
    }
};
int main(){
    person p1;
    person p2;
    p1.set(21,"ram");
    p2.set(34,"kris");
    p1.get();
    p2.get();
}