#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n ;
    cout<<"enter the number"<<"\n";
    cin>>n;
    int digit=0;
    int answer = 0;
    while(n){
        digit = n%10;
        answer = answer*10 + digit;
        n=n/10;
    }
    cout<<answer;
}