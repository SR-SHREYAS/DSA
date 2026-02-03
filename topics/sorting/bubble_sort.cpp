#include<bits/stdc++.h>
using namespace std;

// Bubble sort is a sorting algorithm that repeatedly steps through the list to be sorted, compares each pair of adjacent elements and swaps them if they are in the wrong order.

// check adjacent elements and swap if they are in wrong order
// [64, 34, 25, 12, 22, 11, 90]
// [34, 25, 12, 22, 11, 64, 90]
// [25, 12, 22, 11, 34, 64, 90]
// [12, 22, 11, 25, 34, 64, 90]
// [12, 11, 22, 25, 34, 64, 90]
// [11, 12, 22, 25, 34, 64, 90]

// Time Complexity: O(n^2)
// Space Complexity: O(1)

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }        
}

int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
