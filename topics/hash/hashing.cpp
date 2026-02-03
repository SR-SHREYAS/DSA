#include<bits/stdc++.h>
using namespace std;
// hashing is basically prestoring and fetching
// if hash is declared globally it can have maximum size of 10^7
// int hashp[1e7]; 
// fopr boolean globally 10^8

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // precompute    , depend on the problem if the question says 10^5 the hash[100000] 
    int hash[13] = {0}; //     inside main int hash can have maximum size of 10^6 
                                // for boolean inside main 10^7
    for(int i = 0; i < n; i++){
        hash[arr[i]]++; // increment the frequency of the element
    }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        // fetch method
        cout << hash[number] << endl;
    }
    return 0;
}


// the problem with size of hash inside main and globally during competitive programming
// that why with stl in cpp we use maps 
// two types of maps
// 1. unordered_map -> implemented using hash table , average case O(1) time
// 2. map -> implemented using balanced bst , O(logn) time complexity 

// map <int,int> mp; // key , value pair
// unordered_map <int,int> ump; // key , value pair