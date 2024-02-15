#include <bits/stdc++.h>

using namespace std;

int largest_two (int n1, int n2 ){
    if ( n1 > n2)
        return n1 ;
    else
        return n2;    
}

int largest_three (int n1, int n2 , int n3){
    if ( n1 > n2 && n3)
        return n1;
    else if ( n2 > n1 && n3)
        return n2;
    else
        return n3;    
}


int main ()
{
int n1,n2,n3;
cout << "Enter the First Number : " ;
cin >> n1;
cout << "Enter the Second Number : ";
cin >> n2;
cout << "Enter the Third Number : ";
cin >> n3;
int out = largest_three(n1,n2,n3);
cout << "The Largest Number is : " << out << endl;
}