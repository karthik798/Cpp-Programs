#include <bits/stdc++.h>

using namespace std;

int equally_Divide (int arr[],int n){

    sort (arr,arr+n);
    int count = 1;
    for (int i =1 ; i < n ; i++){
        if (arr[i] > arr[i-1]){
            count++;
        }
    }
    return min(count,n/2);
}

int main () {
    int arr[] = {1,1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << equally_Divide(arr,n) << endl;
    return 0;
}