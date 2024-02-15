#include <bits/stdc++.h>

using namespace std;

int main (){
int n,sum=0;
cout << "Enter the Range till which Series Sum is to be printed : ";
cin >> n;
for ( int i = 1 ; i <= n ; i++){
    sum = sum  +  i ;
}
cout << "The Sum is : " << sum << endl;
}