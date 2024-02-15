#include <bits/stdc++.h>

using namespace std;

int main () {

    // container ::iterator it = v.begin()
    // cout << (*it) << endl;
    // vector <int> v = {1,2,3,4,5};
    // vector<int>::iterator it;
    // for (it = v.begin() ; it != v.end() ; ++it){
    //     cout << (*it) << endl;
    // }

    vector<pair<int,int>> vp = {{1,2},{3,4},{5,6}};
    vector<pair<int,int>> :: iterator it;
    for ( it = vp.begin() ; it != vp.end() ; ++it){
        cout << (*it).first << " " << (*it).second << endl;
        // cout << (it->first) << " " << (it->second) << endl;
    }
    }