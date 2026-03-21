#include<iostream>
using namespace std;
class student{
    int marks;
    public:
    student(int marks){
        this->marks=marks;
    }
    bool operator>(student n){
        return this->marks>n.marks;
    }
};
int main(){
    student s1(92),s2(65);
    if(s1>s2){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}