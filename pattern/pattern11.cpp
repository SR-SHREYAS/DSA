#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the pattern \n";
    cin>>n;
    int i= 1;
    while(i<=n){
        int j = 1;
        char c = 65;
        while(j<=n){
            cout<<c<<"\t";
            c++;
            j++;
        }
        cout<<"\n";
        i++;
    }
}