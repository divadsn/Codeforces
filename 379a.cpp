#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int n = a, r = 0;
  while (true) {
    r = a % b;
    a /= b;
    if (a == 0)
      break;

    n += a;
    a += r;
  }

  cout << n << endl;
}
