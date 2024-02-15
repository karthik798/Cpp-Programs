#include <bits/stdc++.h>

using namespace std;

int search ( int arr[] , int size , int target){
    for ( int i = 0 ; i < size ; i++){
        if (target == arr[i])
            return i;
    }
    return -1;
}


int main (){
    int arr[] = {10,20,30,40};
    int size = 4;
    int target = 0;
    int out = search(arr,size,target);
    cout << "the element is present : " << out << endl;
}