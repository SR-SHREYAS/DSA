#include<bits/stdc++.h>
using namespace std;

int second_largest(vector<int>arr){
    int max1 = arr[0];
    int max2 = arr[0];
    for(int i=0; i<arr.size(); i++){
        if(arr[i]> max1){
            max2= max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i]!= max1){
            max2 = arr[i];
        }
    }
    return max2;
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
    cout<<"second largest element is: " ;
    cout<<second_largest(arr)<<endl;
    return 0;
}