#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, a[110], k[200001] = {0}, y[200001] = {0}, mi = 10100000;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort(a + 1, a + n + 1);
  for (int i = 1; i <= n; i++) {
    int t = 0;
    int x = a[i];
    while (x) {
      k[x]++;
      y[x] += t;
      if (k[x] == m) {
        mi = min(mi, y[x]);
      }
      t++;
      x /= 2;
    }
  }
  cout << mi;
  return 0;
}
