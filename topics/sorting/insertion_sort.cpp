#include<bits/stdc++.h>
using namespace std;

// takes the element and places it at its correct position in sorted array
// [9] [14] [15] [12] [6] [8] [13]
// [9] [12] [14] [15] [6] [8] [13]
// [6] [9] [12] [14] [15] [8] [13]
// [6] [8] [9] [12] [14] [15] [13]
// [6] [8] [9] [12] [13] [14] [15]

// Time Complexity: O(n^2)  
// Space Complexity: O(1)

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(){
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}