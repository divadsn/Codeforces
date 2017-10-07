#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, i;
  cin >> n;

  string s;
  while (s.size() < n) {
    s += to_string(++i);
  }

  cout << s[n - 1];
}
