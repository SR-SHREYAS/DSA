#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of pattern \n";
    cin >> n;
    int i = 1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i<<"\t";
            j++;
        }
        cout<<"\n";
        i++;
    }
}