#include<bits/stdc++.h>
using namespace std;

// quick sort is a divide and conquer algorithm that selects a pivot element and partitions the array around the pivot, such that elements less than the pivot are on the left and elements greater than the pivot are on the right. The process is then recursively applied to the left and right subarrays.
// no use of extra space as we are sorting in place u like merge sort which uses extra space for merging two sorted arrays
// pivot element is selected and partitioning is done around the pivot element
// just place iterating elements at their correct position based of pivot like smaller on lef and greater on right and then recursively apply the same process to left and right subarrays

// [12] [11] [13] [5] [6]       // pivot = 6
// [5] [11] [12] [13] [6]       // pivot = 11
// [5] [6] [11] [12] [13]       // pivot = 12
// [5] [6] [11] [12] [13]       // pivot = 13


// Time Complexity: O(nlogn)
// Space Complexity: O(logn)

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low ;
    int j = high;
    while(i < j){
        while(i <= high && arr[i] <= pivot){
            i++;
        }
        while(j > low && arr[j] > pivot){
            j--;
        }
        if(i < j){
            swap(arr[i], arr[j]);
        }
    }    
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high){
    if(low < high){
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex-1);
        qs(arr, pIndex+1, high);
    }
}

vector<int> quick_sort(vector<int> &arr){
    qs(arr, 0, arr.size()-1);
    return arr;
}

int main(){
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();
    quick_sort(arr);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

   
