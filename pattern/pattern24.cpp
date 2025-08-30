#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the pattern\n";
    cin>>n;
    int i = 1;
    while(i<=n){
        int j= 1;
        int count = 1;
        while(j<=(n+i-1)){
            if(j<=(n-i)){
                cout<<" "<<"\t";
            }
            else if(j>=(n-i) && j<=n){
                cout<<count<<"\t";
                count++;
            }
            else if(j>=n && j<=(n+i-1)){
                cout<<count-2<<"\t";
                count--;
            }
            j++;
        }
        cout<<"\n";
        i++;
    }
}