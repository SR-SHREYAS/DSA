#include<iostream>
using namespace std;
int main(){
    int amount ;
    int num = 1;
    cin >> amount;
    int note100 , note20,note1;
    int am100,am20,am1;
    
    switch (num){
        case 1: 
             note100 = amount / 100;
             amount = amount%100;
             num++;
        case 2 :
             note20 = amount/20;
             amount = amount%20;
             num++;
        case 3:
             note1 = amount/1;
             amount = amount%1;
             break;

    }
    cout<<"no. of 100 rupee note are :: "<<note100<<"\n";
    cout<<"no. of 20 rupee note are :: "<<note20<<"\n";
    cout<<"no. of 1 rupee note are :: "<<note1<<"\n";

return 0;
}