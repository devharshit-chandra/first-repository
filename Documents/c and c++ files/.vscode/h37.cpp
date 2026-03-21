#include<iostream>
using namespace std;
class student{
    public:
    int roll;
    string name;
    void display(){
        cout<<roll<<":"<<name<<endl;
    }
};
int main(){
    student *s=new student();//dynamically allocated object
    s->name="abc";
    s->roll=12;
    s->display();
}