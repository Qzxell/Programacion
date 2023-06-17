#include <bits/stdc++.h>
int main() {
    using namespace std;

    int n;
    cin >> n;
    while(n--){
        vector<int> hola;
        int u;cin>>u;
        while(u/10!=0){
            int y;
            y=u%10;
            u/=10;
            hola.push_back(y);
        }
        int r =*max_element(hola.begin(),hola.end());
        cout << r;
    }

    return 0;
}

