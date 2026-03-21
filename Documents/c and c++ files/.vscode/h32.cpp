#include<iostream>
using namespace std;
class distant{
    int feet;
    int inch;
    public:
    distant(){
    }
    distant(int feet,int inch){
        this->feet=feet+inch/12;
        this->inch=inch%12;
    }
    void display(){
        cout<<feet<<"ft"<<inch<<"in"<<endl;
    }
    //operator overloading using friend function
    friend distant operator+(distant m,distant n);
    friend distant operator-(distant m,distant n);
};
distant operator+(distant m,distant n){
        distant d;
        d.feet=m.feet+n.feet;
        if((m.inch+n.inch)>=12){
            d.feet=m.feet+1+n.feet;
            d.inch=m.inch+n.inch-12;
        }
        else{
            d.inch=m.inch+n.inch; 
        }
        return d;
    }
distant operator-(distant m,distant n){
        distant d;
        d.feet=m.feet-n.feet;
        if((m.inch-n.inch)<=0){
            d.feet=m.feet-1-n.feet;
            d.inch=12+m.inch-n.inch;
        }
        else{
            d.inch=m.inch-n.inch; 
        }
        return d;
    }
int main(){
    distant d1(2,65),d2(8,8);
    distant d3;
    d3=d1+d2;
    d3.display();
    distant d4(7,26),d5(3,45);
    distant d6;
    d6=d4-d5;
    d6.display();
}