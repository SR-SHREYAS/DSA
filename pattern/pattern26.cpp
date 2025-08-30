#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the size of patter\n";
    cin>>n;
    int i = 0;
    while(i<=n){
        int j = 0;
        while(j<=2*n-1){
            if(i==0){                                                                       //i==2*n-1
                cout<<n;
            }
            if(j>=0 && j<=2*n-1){
                cout<<n-i;
            }
           j++;
        }
        cout<<"\n";
        i++;
        n--;
    }
}                                                                                                                      // n=5
                                                                                                                        // 
                                                                                                                        // 555555555
                                                                                                                        // 544444445
                                                                                                                        // 543333345
                                                                                                                        // 543222345
                                                                                                                        // 543212345
                                                                                                                        // 543222345
                                                                                                                        // 543333345
                                                                                                                        // 544444445
                                                                                                                        // 555555555   
