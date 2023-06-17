#include <bits/stdc++.h>
using namespace std;

long long f(long long x){
    return x*(x+1)/2;
}

long long gogo(long long n) {
    if (n<=0) return 0;
    long long y = n%10;
    return  45 * (n / 10) + f(y) + gogo(n / 10);
    //return  1ll *(45 * (n / 10) + y*(y+1)/2 + gogo(n / 10));
    
}

int main() {
    long long suma;
    long long a,b;
 while(cin>>a>>b,(a>=0 && b>=0)){
    suma = gogo(b)-gogo(a-1);
    cout<<suma<<endl;
 }
    return 0;
}

