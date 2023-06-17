#include <bits/stdc++.h>
using namespace std;


long long gogo(long long n) {
    if (n<=0) return 0;
    int y = n%10;
    return  1ll *45 * (n / 10) + 1ll* y*(y+1)/2 + gogo(n / 10);
    //return  1ll *(45 * (n / 10) + y*(y+1)/2 + gogo(n / 10));
    
}

int main() {
    long long suma;
    long long a,b;
 while(cin>>a>>b,(a<=0&&b<=0)){
suma = gogo(b)-gogo(a-1);
cout<<suma;
 }
    return 0;
}

