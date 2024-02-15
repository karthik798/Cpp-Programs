#include <bits/stdc++.h>

using namespace std;

int largest_no(int arr[], int size)
{
    int largest_no = INT_MIN;
    for (int i = 0 ; i < size ; i++){
        if (arr[i] > largest_no )
            largest_no = arr[i];
    }
    return largest_no;
}


int main ()
{
    int arr[] = {10,20,2,33,5,6};
    int size = 6;
    cout << "largest no is : " << largest_no(arr,size) << endl;
    return 0;
}