#include<iostream>
using namespace std;
int getmax(int arr[],int size){
    int max = INT32_MIN;
    for(int i = 0;i<size;i++){              //
        if(arr[i]>max){
            max = arr[i];
        }

    }
return max;    
}
int getmin(int arr[],int size){
    int min = __INT_MAX__;
    for(int i = 0;i<size;i++){
        if(arr[i]<min){
            min= arr[i];
        }

    }
return min;
}
int main(){
    int size;
    cout<<"enter the size of the array"<<endl;
    cin >> size;
    int arr[100];
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    int max = getmax(arr,size);
    int min = getmin(arr,size);
    cout<<"least value is "<< min << endl;
    cout<<"most value is "<<max<<endl;
    return 0;
}