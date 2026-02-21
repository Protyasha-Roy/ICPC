#include <iostream>

using namespace std;

int main() {
  int n;
  int s = 0;

  cin >> n;

  while (n--) {
    int a, b, c;
    cin >> a >> b >> c;

    if ((a == 1 && b == 1) || (a == 1 && c == 1) || (b == 1 && c == 1)) {
      s++;
    }
  }
  cout << s << endl;

  return 0;
}
