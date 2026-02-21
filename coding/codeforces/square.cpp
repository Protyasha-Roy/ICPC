#include <iostream>
using namespace std;

int main() {
  int t;
  int a, b, c, d;

  cin >> t;
  
  while(t--) {
    cin >> a >> b >> c >> d;
    if((a == b) && (b == c) && ( c == d) && (d == a)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
