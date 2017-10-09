#include <iostream>
using namespace std;

string players[] = { "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };

int main() {
  int n;
  cin >> n;
  
  int p = 1;
  while (p * 5 < n) {
    n -= p * 5;
    p *= 2;
  }
  
  cout << players[(n - 1) / p];
}
