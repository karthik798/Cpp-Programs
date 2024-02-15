#include <bits/stdc++.h>

using namespace std;

int main (){
    // key value pairs 
    // map - red black trees - self balancing trees  
    // every element of a map is a pair
    // not of continous nature
    // it orders elements in ascending order 
    // time complexity - O(logn) it can vary based on input s.size * log(n)
    // it affects usually int the case of big values
    // unordered_map<string,string> mp;
    
    map <int,string> ab;

    // find operatiom returns an iterator if it doesnt exist it will return m.end an iterator beyond the range
    auto it = ab.find(5);

    // it will delete from where the iterator is pointing to
    ab.erase(it);

    if ( it == ab.end()){
        cout << "No value" << endl;
    }
    else{
        cout << (*it).first << " " << (*it).second << endl;
    }

    // to delete
    ab.erase (5);

    // to clera
    ab.clear();

    ab[0] = "abc";
    ab[1] = "gof";
    ab.insert({2,"gef"});
    ab.insert(pair<int,string>(3,"dog"));

    for ( auto pair : ab){
        cout << pair.first << " " << pair.second << endl;
    }

    cout << "size : " << ab.size() << endl;

    map<string,string> mp;
    mp.insert(pair<string,string>("apple","der apfel"));
    mp.insert(pair<string,string>("banana","die Banane"));
    mp.insert(pair<string,string>("orange","der Orange,die Apfelsine"));

    mp["apple"] = "Fuck";

    // mp.clear();
    cout << "size : " << mp.size() << endl;


    for ( auto pair : mp){
        cout << pair.first << " " << pair.second << endl;
    }

// unordered maps
// inbuilt implementation , time complexity , valid keys database
// hastables , 0(1)  - avg time complexity can change if there are collisions
unordered_map <int,int> mf ;

//not used generally
multimap<pair<int,int>,string> m;

}



