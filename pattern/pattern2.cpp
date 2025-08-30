#include<iostream>             // pattern 2;
using namespace std;           // rows and columns are equal
int main(){                    // all elements in the row are same and that is the number of row
    int n;
    cout<< "enter the size of pattern\n";
    cin>> n;
    int i = 1;
    while(i<=n){
        int j= 1;
        while(j<=n){
            cout<< i<<"\t";
            j++;
        }
        cout<<"\n";
        i++;
    }
}