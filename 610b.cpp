#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  long long min = INT_MAX;
  long long a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] < min) {
      min = a[i];
    }
  }

  bool repeat = false;
  int result = 0;

  for (int x = 0; x < n; x++) {
    int c = 0;
    while (x < n && a[x] != min) {
      x++;
      c++;

      if (!repeat && x == n) {
        x = 0;
        repeat = true;
      }
    }

    if (c > result) {
      result = c;
    }
  }

  cout << (result + (min * n)) << endl;
}
