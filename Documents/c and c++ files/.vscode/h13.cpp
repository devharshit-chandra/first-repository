#include<iostream>
using namespace std;
class classname{
    private:
    //data members
    //member functions
    string s;
    int age;
    public:
    void set(string st,int ag){
        s=st;
        age=ag;
    }
    void display(){
        cout<<"name : "<<s<<endl;
        cout<<"age : "<<age<<endl;
    }
};
int main(){
    classname s1;//object creation
    classname s2;
    s2.set("saurabh",28);
    s1.set("ravi",28);
    s1.display();
    s2.display();
}