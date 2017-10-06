#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  if (a[n-1] == 0) {
    cout << "UP";
  } else if (a[n-1] == 15) {
    cout << "DOWN";
  } else if (n < 2) {
    cout << -1;
  } else if (a[n-1] > a[n-2]) {
    cout << "UP";
  } else {
    cout << "DOWN";
  }
}
