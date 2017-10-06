#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int A[1000], B[100000] = {0};
  int a = 0, max = 0, b = 0;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> A[i];

    for (int j = 0; j <= i; j++) {
      if (A[i] == A[j]) {
          B[a]++;
      }
    }

    a++;
  }

  b = a;
  for (int i = 0; i < a; i++) {
    if (B[i] > max) {
      max = B[i];
    }

    if (B[i] != 1) {
      b--;
    }
  }

  cout << max << " " << b << endl;
}
