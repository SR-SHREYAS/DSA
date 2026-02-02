#include<bits/stdc++.h>
using namespace std;
int freq_num(vector<int> nums, int n){
    int count = 0;
    for(int i = 0 ; i<nums.size(); i++){
        if(nums[i] == n){
            count++;
        }
    }
    return count ;
}

int main(){
    int n;
    vector<int> arr;
    cout<<"enter the size of array" ;
    cin>>n;
    cout<<"enter elements of array" ;
    for(int i=0;i<n;i++){
        int x;              
        cin>>x;
        arr.push_back(x);
    }
    int num;
    cout<<"enter the number whose frequency is to be found" ;
    cin>>num;                       
    cout<<"frequency of "<< num <<" is: " ;
    cout<<freq_num(arr, num)<<endl;
    return 0;    
}