#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number to be verified\n";   
    cin>>a;                        // scanf in c++ is cin>>a value storeed in a
    cout<<"number provided is "<< a <<"\n";
    if(a>0){
        cout<< a<<" is positive \n";
    }
    else if(a==0){
        cout<< a<<" is neither positive nor negative \n";
    }
    else{
        cout<< a<<" is negative \n";
    }
}