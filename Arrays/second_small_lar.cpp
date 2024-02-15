#include <bits/stdc++.h>

using namespace std;

int maxi,mini ;

void largest_no (int arr[],int size){
    maxi = INT_MIN;
    for ( int i = 0; i < size ; i++){
        if ( arr[i] > maxi ){
            maxi = arr[i];
        }
    }
}

void smallest_no (int arr[],int size){
    mini = INT_MAX;
    for ( int i = 0; i < size ; i++){
        if ( arr[i] < mini ){
            mini = arr[i];
        }
    }
}


int main () {
    int arr[] = {70,20,0,40,50};
    int size = 5;
    largest_no(arr,size);
    cout << "The Largest No in Array : " << maxi << endl;  
    smallest_no(arr,size);
    cout << "The Smallest No in Array : " << mini << endl;  
}