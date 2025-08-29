#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid;
    while(start<=end){
        // This is a better way to calculate mid to prevent integer overflow
        // for large values of start and end.
        mid = start + (end - start) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(key < arr[mid]){
            end = mid -1 ;
        } else { // key > arr[mid]
            start= mid +1;
        }
    }
    return -1;
}
int main(){
    int even[6] = { 2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    int index = binarysearch(even,6,12);
    cout<<"index of 12 is " << index << endl;
    int index2 = binarysearch(odd,5,8);
    cout<<"index of 8 is " << index2 << endl;

    return 0;
}