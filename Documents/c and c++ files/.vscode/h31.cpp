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
    distant operator+(distant n){
        distant d;
        d.feet=this->feet+n.feet;
        if((this->inch+n.inch)>=12){
            d.feet=this->feet+1+n.feet;
            d.inch=this->inch+n.inch-12;
        }
        else{
            d.inch=this->inch+n.inch; 
        }
        return d;
    }
    distant operator-(distant n){
        distant d;
        d.feet=this->feet-n.feet;
        if((this->inch-n.inch)<=0){
            d.feet=this->feet-1-n.feet;
            d.inch=12+this->inch-n.inch;
        }
        else{
            d.inch=this->inch-n.inch; 
        }
        return d;
    }
    void display(){
        cout<<feet<<"ft"<<inch<<"in"<<endl;
    }
};
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