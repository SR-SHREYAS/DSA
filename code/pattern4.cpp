#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j,k,s;
    for(i=1 ; i<=n ; i++){
        for(s=1 ; s<=(n-i) ; s++){
            cout<<"   ";
        }
        for(j=1; j<=i ; j++){
            cout<<" "<<j<<" ";
        }
        for(k=j-2 ; k>=1 ; k--){
            cout<<" "<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}
