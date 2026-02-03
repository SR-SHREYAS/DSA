#include<bits/stdc++.h>
using namespace std;

// merge sort is a recursive sorting algorithm that divides the array into two halves, sorts them and then merges them back together.

                                // [3] [1] [2] [4] [1] [5] [2] [6] [4]                 : 9 elements
//                                      /                 \                         
//                                     /                   \
//                          [3] [1] [2] [4] [1]           [5] [2] [6] [4]          : 5 elements       4 elements
//                             /          \                   /         \      
//                            /            \                 /           \
//                         [3] [1] [2]    [4] [1]         [5] [2]    [6] [4]        : 3,2 elements       2,2 elements
//                          /     \        /   \           /   \        /    \
//                         /       \      /     \         /     \      /      \
//                   [3] [1]       [2]  [4]     [1]      [5]    [2] [6]       [4]    : 1,1 element       1,1 element   
//                    \   /         /    \       /         \     /    \        /       /
//                     \ /         /      \     /           \   /      \      /  
//                  [1] [3]      [2]      [1] [4]          [2] [5]      [4] [6]         : merged pairs

// Time Complexity: O(nlogn)
// Space Complexity: O(n)

void merge(int low, int mid, int high, vector<int> &arr){
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left[n1], right[n2];
    for(int i=0; i<n1; i++){
        left[i] = arr[low + i];
    }
    for(int j=0; j<n2; j++){
        right[j] = arr[mid + 1 + j];
    }
    int i=0, j=0, k=low;
    while(i < n1 && j < n2){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k] = right[j];
        j++;
        k++;
    }
}

void merge_sort(int low,int high, vector<int> &arr){
    if(low >= high) return;
    int mid = low + (high - low)/2;
    merge_sort(low, mid, arr);\
    merge_sort(mid+1, high, arr);
    merge(low, mid, high, arr);
}

int main(){
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    int n = arr.size();
    merge_sort(0, n-1, arr);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}



