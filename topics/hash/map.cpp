#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // precompute
    map<int,int> mp; // key , value pair
    // unordered_map<int,int> mp; // key , value pair


    for(int i = 0; i < n; i++){
        mp[arr[i]]++; // increment the frequency of the element
    }   

    // iterator to traverse the map
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;   
    } 

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        // fetch method
        cout << mp[number] << endl;
    }
    return 0;
}


// map stores all value in soted order according to key
// unordered_map does not store in sorted order
// time complexity of map is O(logn) for insertion , deletion , search
// time complexity of unordered_map is O(1) on average for insertion , deletion , search
// but in worst case it can be O(n)
// use unordered_map when order does not matter and you want faster operations 
// in map key can be any data type including user defined data types
// in unordered_map key must be hashable data type like int , short , char , string etc. data types like float , double are not recommended as key in unordered_map due to precision issues
// both map and unordered_map allow duplicate values but not duplicate keys
// if you try to insert a duplicate key the old value will be updated with new value 