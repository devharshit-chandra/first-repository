#include<iostream>
using namespace std;
class student{
    private:
    int roll;
    string name;
    public: 
    student(){
    }
    student(int r,string s){
        roll=r;
        name=s;
    }
    student(student &s){
        roll=s.roll;
        name=s.name;
    }
    void disp(){
        cout<<roll<<" : "<<name<<endl;
    }
};
int main(){
    student s1(1,"abhay");
    s1.disp();
    student s2(s1);
    s2.disp();
    student s3(s2);
    s3.disp();
}