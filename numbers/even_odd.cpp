#include <bits/stdc++.h>

using namespace std;

void even_odd ( int n ){
    if ( n < 0) {
        cout << "Entered Number is Negative.Please Re-enter";  
        return;
    }
    if ( n % 2  == 0)
        cout << "The Number is Even ";
    else
        cout << "The Number is Odd ";    
}

int main (){
int n;
cout << "Enter the Number : ";
cin >> n;
even_odd(n);
}