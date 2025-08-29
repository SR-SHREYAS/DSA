#include<iostream>
using namespace std;
int main(){
    int a = 3;   // = is assignment operators 
    int b = 4;
    bool first = (a==b);
    cout << first << "\n";

    bool second = (a<b);    //  == , < , > , <= , >= , !=  relational operators
    cout << second << "\n";

    bool third = (a>b);
    cout << third << "\n";

    bool fourth = (a<=b);
    cout << fourth << "\n";

    bool fifth = (a>=b);
    cout << fifth << "\n";

    bool sixth = (a!=b);
    cout << sixth << "\n";

}