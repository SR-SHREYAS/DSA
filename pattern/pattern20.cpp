#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the size of the array\n";
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            if(j<=(i-1)){
                cout<<" "<<"\t";
            }
            else{
                cout<<"*"<<"\t";
            }
            j++;
        }
        cout<<"\n";
        i++;
    }
}