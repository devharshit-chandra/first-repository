#include<iostream>
using namespace std;
class booking{
    string custname;
    string mname;
    int notickets;
    int ticketprice;
    public:
    static int totalbookings;
    static int totalseatsbooked;
    booking(){
        totalbookings=totalbookings+1;
    }
    void calculatetotal(int x,int p){
        if(x>=5){
            ticketprice=(x*p)-((x*p*10)/100);
        }
        else{
            ticketprice=x*p;
        }
    }
    void inputdetails(){
        cout<<"customer name : ";
        cin>>custname;
        cout<<"select movie"<<endl<<"1.avengers"<<endl<<"2.leo"<<endl<<"3.jawan"<<endl;
        int a;
        cout<<"enter choice : ";
        cin>>a;
        int b;
        cout<<"enter number of tickets : ";
        cin>>b;
        if(a==1){
            mname="avengers";
            notickets=b;
            int price=200;
            calculatetotal(b,price);

        }
        else if(a==2){
            mname="leo";
            notickets=b;
            int price=180;
            calculatetotal(b,price);
        }
        else{
            mname="jawan";
            notickets=b;
            int price=150;
            calculatetotal(b,price);
        }
        totalseatsbooked=totalseatsbooked+notickets;
    }
    void displaybooking(){
        cout<<"----Booking Summary----"<<endl;
        cout<<"customer name : "<<custname<<endl;
        cout<<"movie : "<<mname<<endl;
        cout<<"tickets : "<<notickets<<endl;
        if(notickets>=5){
            cout<<"discount applied : 10%"<<endl;
            cout<<"total amount : "<<ticketprice<<endl;
        }
        else{
            cout<<"total amount : "<<ticketprice<<endl;
        }
        cout<<"--------------------"<<endl;
    }
     static showstatistics(){
        cout<<"====booking statistics===="<<endl;
        cout<<"total booked : "<<totalbookings<<endl;
        cout<<"total seats booked : "<<totalseatsbooked<<endl;
        cout<<"===================="<<endl;
    }
};
int booking::totalbookings=0;
int booking::totalseatsbooked=0;
int main(){
    booking b1;
    booking b2;
    b1.inputdetails();
    b2.inputdetails();
    b1.displaybooking();
    b2.displaybooking();
    booking::showstatistics();
}