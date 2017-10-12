#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  
  long long int sum = 0, m;
  for (int i = 1; i <= n; i++) {
    cin >> m;
    sum += m * min(min(k, n - k + 1), min(i, n - i + 1));
  }

  double d = (double) sum / (n - k + 1);
  printf("%.10f\n", d);
}
