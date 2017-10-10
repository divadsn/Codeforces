#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> A;
  set<long long> S;
  S.insert(0);
  
  long long c = 0;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    
    A.push_back(a);
    c += a;
    S.insert(c);
  }
  
  long long e = c;
  if (e % 2 == 1) {
    cout << "NO" << endl;
    return 0;
  }
  
  e /= 2; c = 0;
  for (int i = 0; i < n; ++i) {
    long long k = A[i];
    c += k;
    
    if (S.count(e + k) != 0 && c <= e + k) {
      cout << "YES" << endl;
      return 0;
    }
    
    if (S.count(e - k) != 0 && e - k < c) {
      cout << "YES" << endl;
      return 0;
    }
  }
  
  cout << "NO" << endl;
}
