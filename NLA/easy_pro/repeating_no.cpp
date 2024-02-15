#include <bits/stdc++.h>

using namespace std;

int repeating_element (int arr[] , int size){
    for (int i = 0 ; i < size ; i++){
        for (int j =i+i ; j < size ; j++){
            if (arr[i] == arr[j]){
                return arr[i];
            }
        }
    }
    return -1;
}


int main () {
    int arr[] = {1,2,3,4,1,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = repeating_element(arr,size);
    cout << result;
}