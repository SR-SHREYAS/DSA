#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the size of the pattern \n";
    cin>>n;
    int i= 1;
    while(i<=n){
       int j = 1;
       while(j<=2*n){
        if(j<=(n-i+1)){
            cout<< j <<"\t";
        }      
        else if(j>=(n-i+2) && j<=(n+i-1)){
            cout<< "*" <<"\t";
        }
        else if(j>=n+i && j<=2*n){
            cout<< n-i+1 <<"\t";         // cout<< 2*n-j+1 <<"\t";
        }
        j++;
       }
       cout<<"\n";
        i++;
    }
}