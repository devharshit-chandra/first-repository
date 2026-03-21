#include<iostream>
using namespace std;
class object{
    public:
    int a,b;
    object(){
        cout<<"created"<<endl;   
    }
    ~object(){
        cout<<"object deleted"<<endl;
    }
};
int main(){
    object a,b; 
}