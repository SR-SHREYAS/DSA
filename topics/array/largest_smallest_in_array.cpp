#include<bits/stdc++.h>
using namespace std;
int largest(vector<int> arr){
    int max=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int smallest(vector<int> arr){
    int min=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    cout<<"enter the size of array" ;
    cin>>n;
    cout<<"enter elements of array" ;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"largest" ;
    cout<<largest(arr)<<endl;
    cout<<"smallest" ;
    cout<<smallest(arr)<<endl;
    return 0;
}