#include<bits/stdc++.h>
using namespace std;

bool is_sorted(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter elements of the array: ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (is_sorted(arr)) {
        cout << "The array is sorted in non-decreasing order." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }
    return 0;
}
