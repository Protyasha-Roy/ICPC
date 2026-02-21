#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a, b, c, d;
    int ahead = 0;
    cin >> a >> b >> c >> d;

    if (b > a) {
      ++ahead;
    } if (c > a) {
      ++ahead;
    } if (d > a) {
      ++ahead;
    }

    cout << ahead << endl;
  }
  return 0;
}
