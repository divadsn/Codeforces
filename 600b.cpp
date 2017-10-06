#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> A, B;

  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    A.push_back(c);
  }

  sort(A.begin(), A.end());

  for (int i = 0; i < m; i++) {
    int c;
    cin >> c;

    vector<int>::iterator it;
    it = upper_bound(A.begin(), A.end(), c);
    cout << it - A.begin() << " ";
  }

  cout << endl;
}
