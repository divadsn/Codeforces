#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  long *L = new long[n - 1];
  long *R = new long[n - 1];

  long lp, cp;
  cin >> lp;

  for (int i = 0; i < n - 1; i++) {
    cin >> cp;
    if (cp < lp) {
      L[i] = cp; R[i] = lp;
    } else {
      L[i] = lp; R[i] = cp;
    }

    lp = cp;
  }

  bool intersect = false;
  for (long k = 0; k < n - 1; k++) {
    if (intersect)
      break;

    for (long s = 0; s < n - 1; s++){
      if(s == k)
        continue;

      if (intersect)
        break;

      if (L[k] < L[s] && L[s] < R[k] && R[k] < R[s]) {
        intersect = true;
        break;
      }
    }
  }

  if (intersect)
    cout << "yes" << endl;
  else
    cout << "no" << endl;
}
