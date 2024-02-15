#include<bits/stdc++.h>

using namespace std;

int unique_pairs (vector<int>arr){
    set<pair<int,int>>ab;
    for (int i = 0 ; i < arr.size();i++){
        for (int j = 0 ; j < arr.size() ; j ++){
            ab.insert({arr[i],arr[j]});
        }
    }
    return ab.size();
}

int main () {
    vector <int> arr = {1, 2, 2, 4, 2, 5, 3, 5 };
    cout << unique_pairs(arr);
    return 0;
}

