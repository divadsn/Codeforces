#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a;
  cin >> a;
  
  int tab[a];
  for (int i = 0; i < a; i++) {
    cin >> tab[i];
  }
  
  int r = tab[0], e = 0, d = 0, q = 0;
  sort(tab, tab + a);
  
  for (int i = 0; i < a; i++) {
    if (tab[i] != r)
      e = tab[i];
  }
  
  if (e == 0) {
    cout << "NO" << endl;
    return 0;
  }
  
  for (int i = 0; i < a; i++) {
    if (r != tab[i] && e != tab[i]) {
      cout << "NO" << endl;
      return 0;
    }
    
    if (tab[i] == e)
      d++;
    else
      q++;
  }

  if (q == d)
    cout << "YES" << endl << r << " " << e << endl;
  else
    cout << "NO" << endl;
}
