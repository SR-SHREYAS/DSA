#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of pattern \n";
    cin>>n;
    int i = 1;
    char c = 65;
    while(i<=n){
        int j = 1;
        char var = c + n -(i+j)+1;   // var = c+n-i;   // also a solution
        while(j<=i){
            cout<< var <<"\t";
            j++;
            var++;
        }
        cout<<"\n";
        i++;
    }
}