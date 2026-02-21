#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
  string s, t;

  cin >> s;
  cin >> t;

  string r = s;
  reverse(r.begin(), r.end());

  if(r == t) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
