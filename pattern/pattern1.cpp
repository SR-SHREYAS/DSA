#include<iostream>         // PATERN 1
using namespace std;       // no of rows and column are same ,print star pattern
int main(){
    int n;
    cout<< "enter the size of the pattern\n";
    cin >> n;
    int i =1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<< "*"<<"\t";
            j++;
        }
    cout<<"\n";
    i++;
    }
}