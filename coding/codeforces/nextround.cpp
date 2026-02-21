#include <iostream>

using namespace std;

int main() {
  int n, k;
  int total = 0;

  cin >> n >> k;

  int m[n];

  for (int i = 0; i < n; ++i) {
    cin >> m[i];
  }

  for (int i = 0; i < n; ++i) {
    if (m[i] >= m[k - 1] && m[i] > 0) {
      total++;
    }
  }

  cout << total << endl;
  return 0;
}
