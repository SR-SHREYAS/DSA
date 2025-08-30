#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of pattern \n";
    cin>> n;
    int i = 1;
    char c = 65;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<< c <<"\t";
            j++;
        }
        c++;
        cout<<"\n";
        i++;
    }
}