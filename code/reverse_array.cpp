#include<iostream>
using namespace std;
void reverse( int arr[],int size){
    int temp;
    for(int i=0;i<(size/2);i++){
        arr[i] = arr[i]^arr[size-i-1];
        arr[size-i-1] = arr[i]^arr[size-i-1];
        arr[i] = arr[i]^arr[size-i-1];
    }
}

int main(){
    int arr[10] = {1,2,3,4,5,6};
    cout<<"before reverse"<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"after reverse"<<endl;
    reverse(arr,6);
    for(int i=0;i<6 ;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}