// two sum

#include <bits/stdc++.h>

using namespace std;

bool two_sum ( int arr[] , int size , int target)
{
    for ( int i = 0 ; i < size - 1 ; i++){
        for ( int j = i+1 ; j < size ; j++){
            if ( arr[i] + arr[j] == target)
            {
                return 1;
                // return pair++
            }            
        }
    }
    return 0;
    //return pair
}

int main ()
{
    int arr[] = {1,2,3,4,5};
    int target = 3;
    int size = 5;
    if (two_sum(arr,size,target)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << target << endl;
    }
    return 0;
}