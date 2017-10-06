#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 1; i <= n; i++) {
    for (int x = 1; x <= m; x++) {
      if (i % 2) {
        cout << "#";
      } else if (x == 1 && i % 4 == 0) {
        cout << "#";
      } else if (x == m && i % 4 != 0) {
        cout << "#";
      } else {
        cout << ".";
      }
    }

    cout << endl;
  }
}
