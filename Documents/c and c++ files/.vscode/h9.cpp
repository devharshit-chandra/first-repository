#include<iostream>
using namespace std;
// int main(){
//     int a=5;
//     int *p1=&a;
//     int **p2=&p1;
//     cout<<a<<endl;
//     cout<<*p1<<endl;
//     cout<<**p2;
// }
// int main(){
//     int *p=NULL;
//     cout<<p;
// }
int main(){
    void *p;
    int a=5;
    p=&a;
    cout<<*(int*)p<<endl;
    char b='a';
    p=&b;
    cout<<*(char*)p;
}