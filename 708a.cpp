#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  int count = 0, last = s.length();
  for (int i = 0; i < last; i++) {
    if (s[i] == 'a') {
      count++;
      continue;
    }

    if (s[i] != 'a' && s[i + 1] == 'a') {
      s[i]--;
      break;
    } else {
      s[i]--;
    }
  }

  if (count == last) {
    s[last - 1] = 'z';
  }

  cout << s << endl;
}
