#include <bits/stdc++.h>

using namespace std;

int distinct_sum (int arr1[], int arr2[] ,int size1 , int size2){
    int count = 0;
    unordered_set<int>s;
    for (int i = 0 ; i < size1 ; i++){
        for (int j = 0 ; j < size2 ; j++){
            int sum = arr1[i] + arr2[j];
            if (s.count(sum) == 0){
                s.insert(sum);
                count++;
            }
        }
    }
    return count;
}


int main () {
    int arr1[] = {12,2,7};
    int arr2[] = {4,3,8};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int result = distinct_sum(arr1,arr2,size1,size2);
    cout << result;
}