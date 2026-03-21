#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string ch;
    cin>>ch;
    int vowel=0;
    int alpha=0;
    int digit=0;
    for(char x :ch){
        if(isalpha(x)==true){
            alpha=alpha+1;
            if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
                vowel=vowel+1;
            }
        }
        else if(isdigit(x)==true){
            digit=digit+1;
        }
    }
    cout<<"vowels : "<<vowel<<endl;
    cout<<"alhpabets : "<<alpha<<endl;
    cout<<"digits : "<<digit<<endl;
}