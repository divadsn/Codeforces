#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  for (int i = 0; i < x * y; i++) {
    char c;
    cin >> c;
    if (c != 'B' && c != 'W' && c != 'G') {
      cout << "#Color" << endl;
      return 0;
    }
  }

  cout << "#Black&White" << endl;
}
