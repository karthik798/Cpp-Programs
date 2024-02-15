#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, s = 0, m, v;

  // Read the number of pairs
  cin >> n;

  // Iterate through each pair of mass and velocity
  for (int i = 0; i < n; i++) {
    cin >> m >> v;
    
    // Calculate the momentum and add it to the total
    s += (m * v);
  }

  // Print the total momentum
  cout << s;

  return 0;
}
