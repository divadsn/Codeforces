#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int x1 = a + b, x2 = a * b, y1 = b + c, y2 = b * c;
  int r = 0, s = 0;

  s = x1 + c;
  if (s > r) r = s;

  s = x1 * c;
  if (s > r) r = s;

  s = x2 + c;
  if (s > r) r = s;

  s = x2 * c;
  if (s > r) r = s;

  s = a + y1;
  if (s > r) r = s;

  s = a * y1;
  if (s > r) r = s;

  s = a + y2;
  if (s > r) r = s;

  s = a * y2;
  if (s > r) r = s;

  cout << r << endl;
}
