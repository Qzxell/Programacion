#include <bits/stdc++.h>
using namespace std;

int Hp(int n ){
if(n<=100) {
	return Hp(Hp(n+11));
}
if(n>=101) {
	return n - 10;
}
return 0;
}

int main() {
int n; 
cin>> n;
cout<<Hp(n);
return 0;
}
