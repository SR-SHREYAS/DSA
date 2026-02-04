#include<bits/stdc++.h>
using namespace std;

// input array would be sorted

// brute force approach
void remove_duplicates(vector<int>& arr) {
    set<int> unique_elements;
    for (int num : arr) {
        unique_elements.insert(num);
    }
    int number_of_unique_elements = unique_elements.size();
    arr.clear();
    for (int num : unique_elements) {
        arr.push_back(num);
    }
}

// optimised approach (two pointer approach)

void remove_duplicates_optimised(vector<int>& arr) {
    if (arr.empty()) return;
    int i = 0; 
    for(int j =0; j<arr.size(); j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    arr.resize(i + 1);
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
    // remove_duplicates(arr);
    remove_duplicates_optimised(arr);
    cout << "Array after removing duplicates: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

