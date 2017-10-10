#include <iostream>
using namespace std;

int main() {
  int a, b, c, x, y, z;
  cin >> a >> b >> c >> x >> y >> z;
  
  int n = 0, m = 0;
  
  if (a > x) {
    n += (a - x) / 2;
  } else {
    m += x - a;
  }

  if (b > y) {
    n += (b - y) / 2;
  } else {
    m += y - b;
  }

  if (c > z) {
    n += (c - z) / 2;
  } else {
    m += z - c;
  }
  
  cout << (n >= m ? "Yes" : "No") << endl;
}
