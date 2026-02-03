#include<bits/stdc++.h>
using namespace std;

// you use ascii values like a->97, b->98 
// if chr - "a" = 0 then a is mapped to 0 
// if chr - "a" = 1 then b is mapped to 1 

int main(){
    string s;
    cin >> s;
    // precompute   // at most 256 characters in ascii table , more than this is not possible 
    int hash[256] = {0};
    for(int i = 0; i < s.size(); i++){
        hash[s[i]]++;
    }
    int q;
    cin >> q;
    while(q--){
        char ch;
        cin >> ch;
        // fetch method
        cout << hash[ch] << endl;
    }
    return 0;
}