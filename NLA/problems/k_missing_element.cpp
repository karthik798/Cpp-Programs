#include <bits/stdc++.h>

using namespace std;

int K_missing_element(int arr[],int n,int k){
    int count = 0;
    unordered_set<int>s;
    for (int i = 0 ; i < n ; i++){
        s.insert(arr[i]);
    }
    int maxm = *max_element(arr,arr+n);
    int minm = *min_element(arr,arr+n);
    for (int i = minm+1 ; i < maxm ; i++){
        if(s.find(i) == s.end())
            count++;
        if(count == k)
            return i;
    }
    return -1;
}

int main (){
    int arr[] = { 2, 10, 9, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;
    cout << K_missing_element(arr, n, k);
}