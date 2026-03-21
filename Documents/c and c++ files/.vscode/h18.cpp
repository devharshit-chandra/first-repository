#include<iostream>
using namespace std;
class student{
    int *roll;
    string *name;
    public:
    student(){
        roll=new int(0);
        name=new string("default");
        cout<<"default constructor"<<endl;
    }
    student(int r,string s){//now this is a dynamic parameterized constructor
        roll=new int(r);
        name=new string(s);
        cout<<"parameterized constructor"<<endl;
    }
    void display(){
        cout<<*roll<<":"<<*name<<endl;
    }
    ~student(){//now this is a dynamic destructor
        delete roll;
        delete name;
        cout<<"object deleted"<<endl;
    }
};
int main(){
    student s1(2,"abc");
    {
    student s2;
    s2.display();
    }
    s1.display();
}