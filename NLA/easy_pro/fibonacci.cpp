#include <bits/stdc++.h>

using namespace std;

int main ()
{
// 0 , 1 , 1 , 2, 3 , 5
int size = 10;
int a = 0 , b = 1,result = 0;
for (int i = 0 ; i < size  ; i++ ){
    cout << a << endl;
    result = a + b;
    a = b;
    b = result;
}
return 0;
}