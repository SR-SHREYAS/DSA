#include<bits/stdc++.h>
using namespace std;

void printbinary(int n){
  if (n>1){
    printbinary(n/2);
  }
  cout<<n%2;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        printbinary(num);
        cout<<endl;
    }
    return 0;
}