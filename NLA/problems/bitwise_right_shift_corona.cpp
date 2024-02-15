#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, n;
  cin >> N;
  vector < int > v(N);
  for (int i = 0; i < N; i++) cin >> v[i];
  cin >> n;
  for (auto i: v)
    cout << (i >> n) << " ";
}