#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
  string first, second;
  int v;

  cin >> first;
  cin >> second;

  for(int i = 0; i < first.length(); ++i) {
    if((abs(first[i] - second[i]) == 0) || (abs(first[i] - second[i]) == 32)) {
      v = 0;
    } else if(abs(first[i] - second[i]) > 32) {
      v = 1;
    } else {
      v = -1;
    }
  }
  
  return 0;
}
