#include <bits/stdc++.h>

using namespace std;

int product_of_all_others (int arr[],int size){
    int product = 1;
    for (int i = 0 ; i < size ; i++){
        product *= arr[i];
    }
    for(int i = 0 ; i < size ; i++){
        if(arr[i] = product / arr[i])
            return true;
    }
    return false;
}

int main (){
    int arr[] = {1,2,12,3,2};
    int size = 3;
    int result = product_of_all_others(arr,size);   
    cout << boolalpha << result;
}

