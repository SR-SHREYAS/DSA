#include<bits/stdc++.h>
using namespace std;

void printdigits(int digit){
    if(digit<10){
        cout<< digit << " ";
        return;
    }
    printdigits(digit/10);
    cout << digit%10 << " ";
}
int main(){
    int n ;
    cin>>n;
    while(n--){
        int digit = 0;
        cin>>digit;
        printdigits(digit);
        cout<<endl;
    }
}