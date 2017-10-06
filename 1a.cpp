#include <iostream>
using namespace std;

int main() {
  long long n, m, a, o;
  cin >> n >> m >> a;
  o = ((n + a - 1) / a) * ((m + a - 1) / a);
  cout << o << endl;
}
