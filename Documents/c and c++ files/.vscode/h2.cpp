#include<iostream>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    int i=0;
    while(i<a.length()){
        if(a[a.length()-1]==' '){
            a.erase(a.length()-1,1);
        }
        if (a[0]==' '){
            a.erase(0,1);
        }
        else if(a[i]==' ' && a[i+1]==' '){
            a.erase(i,1);
        }
        else{
            i=i+1;
        }
    }
    cout<<"no extra space :"<< a<<":";
}