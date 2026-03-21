#include<iostream>
using namespace std;
namespace math{
    float pi=3.14;
    float aoc(int r){
        return pi*r*r;
    }
}
int main(){
    int a;
    scanf("%d",&a);
    printf("number : %d",a);
    cin >>a;
    cout <<"you have entered " <<a << endl;
    cout<<"end";
    cout<< math::pi<<endl;
    cout<< math::aoc(3);
    auto a='d';
    cout<<a<<endl;
    a=57;
    cout<<a;
    int a=5;
    int *p=&a;//refrencing
    cout<<*p<<endl;//derefrencing
    return 0;
}