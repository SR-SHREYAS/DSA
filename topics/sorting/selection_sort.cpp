#include<bits/stdc++.h>
using namespace std;


// select minimum element from unsorted array and swap it with first element of unsorted array
// [13] , [25] , [11] , [22] , [64]
// [11] , [25] , [13] , [22] , [64]
// [11] , [13] , [25] , [22] , [64]
// [11] , [13] , [22] , [25] , [64]

// Time Complexity: O(n^2)
// Space Complexity: O(1)


void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}