#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter the size of the pattern \n";
    cin>>n;
    int i = 1;
    while(i<=n){
        int j= 1;
        int count = 1;
        while(j<=n){
           if(j<=(n-i)){
            cout<<" "<<"\t";
           }
           else if(j>(n-i)){
            cout<<count<<"\t";
            count++;
           }
        j++;
        }
        cout<<"\n";
        i++;
    }
}