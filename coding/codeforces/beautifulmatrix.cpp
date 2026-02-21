#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  int m[5][5];
  int x, y;
  int s;

  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      cin >> m[i][j];
      if (m[i][j] == 1) {
        x = j + 1;
        y = i + 1;
      }
    }
  }

  s = abs(y - 3) + abs(x - 3);
  cout << s << endl;
  return 0;
}
