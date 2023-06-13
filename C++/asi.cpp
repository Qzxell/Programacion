#include <bits/stdc++.h>
#include <vector>

using namespace std;


long long gogo(long long n) {
    if (n <=9) return n*(n+1)/2;
    return 1ll* 45 * (n / 10) + gogo(n%10) + gogo(n / 10);
}

int main() {
    vector<long long > numerosx;
    vector<long long> numerosy;
    int t, o;
    long long suma;

    while (cin >> t >> o && t > 0 && o > 0) {
        numerosx.push_back(t);
        numerosy.push_back(o);
    }

    for (int i = 0; i < numerosx.size(); i++) {
        t = numerosx[i]-1;
        o = numerosy[i];
	if (t<0 ) t+=1;
        suma = gogo(o) - gogo(t);
        cout << suma << endl;
    }

    return 0;
}

