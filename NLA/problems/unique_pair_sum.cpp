#include <bits/stdc++.h>

using namespace std;

void unique_pair_sum (vector<int> arr, int target ){
    vector<pair<int,int>>final;
    for (int i = 0 ; i < arr.size() ; i++){
        for (int j = i + 1; j < arr.size() ; j++)
            if (arr[i] + arr[j] == target){
                final.push_back({arr[i],arr[j]});
            }
    }

    for (auto pair : final){
        cout << "(" << pair.first << "," << pair.second << ")" << endl;
    }
}

int main () {
    vector <int> arr = {1,2,3,4,5};       
    int target = 5;
    unique_pair_sum(arr,target);
    return 0;   
}