#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 6;
    cout<<"a&b = "<<(a&b) <<"\n";
    cout<<"a|b = "<<(a|b) <<"\n";
    cout<<"a^b = "<<(a^b) <<"\n";
    cout<<"~a = "<<(~a )<<"\n";
    cout<<"~b = "<<(~b )<<"\n";
    cout<<"17 rightshift once = "<< (17>>1) <<"\n";
    cout<<"17 rightshift twice = "<< (17>>2) <<"\n";
    cout<<"21 leftshift once = "<< (21<<1) <<"\n";
    cout<<"21 leftshift twice = "<< (21<<2) <<"\n";
}