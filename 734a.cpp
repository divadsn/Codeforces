#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  string f;
  cin >> f;

  int a = 0, d = 0;
  for (int i = 0; i < n; i++) {
    if (f[i] == 'A') {
      a++;
    } else if (f[i] == 'D') {
      d++;
    }
  }

  if (a == d) {
    cout << "Friendship" << endl;
  } else if (a>d) {
    cout << "Anton" << endl;
  } else if (a<d) {
    cout << "Danik" << endl;
  }
}
