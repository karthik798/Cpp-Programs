#include <bits/stdc++.h>

using namespace std;

//  An integer x is said to be Noble in arr[] 
//  if the number of integers greater than x is equal to x.


int find_noble_integer (vector<int>arr){
    sort(arr.begin(),arr.end());
    for (int i  = 0 ; i < arr.size() ; i++){
        if(arr[i] == arr.size() - i - 1){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    vector <int> arr = {3,4,5,6};
    int result = find_noble_integer(arr);
    cout << result;
}