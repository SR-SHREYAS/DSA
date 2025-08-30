#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the pattern \n";
    cin>>n;
    int i = 0;
    while(i<=n){
        int j = 0;
        while(j<i){
            cout<< i+j <<"\t";
            j++;
        }
        cout<<"\n";
        i++;
    }
}