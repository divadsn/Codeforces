#include <iostream>
#include <stack>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  int p[21370];
  for (int i = 1; i <= n; i++) {
    cin >> p[i];
  }
  
  stack<int> tops;
  int k = 0;

  for (int i = 1; i <= n; i++) {
    int a = 1, x = i;
    while (p[x] != -1) {
      x = p[x];
      a++;
    }

    if (k < a)
      k = a;
  }

  cout<< k <<endl;
}
