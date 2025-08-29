#include<iostream>

using namespace std;

int main(){
    int a = 5;
    cout<< a <<"\n" ;
    char c = 's';
    cout << c << "\n";
    bool b = false;  // true prints 1 and false print 0 in bool data type 
    cout<< b <<"\n";
    int size = sizeof(a);  // to measure the size of the variable in memory 
    cout<< "size of a is "<<size<< "\n";
}