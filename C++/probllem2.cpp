#include <bits/stdc++.h>
using namespace std;

int popElement(long long b){//star do for second element to circle
	if(b == 1) return 1;
	if (b%2==0) return 2*popElement(b/2)-1;
	if (b%2==1) return (2*popElement((b+2)/2)-2+b)%(b+1);
	return 0;
}

int main(){
	long long n; cin>>n;
	cout << popElement(n);
}
