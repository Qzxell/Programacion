#include <bits/stdc++.h>
using namespace std;

int main(){
int n ; cin >> n;
if (n<=9) cout<< n ;
else if( n <= 189) {
	bool first;
	int number; 
	n-=10;
	n%2==0? first = true: first =false;
	number = 10+n/2;
	if(first)number/=10;
	else number %=10;
	cout << number;
} else if(n < 1000){
	n-=100;
	int p = n%3;
	int r =n/3;
	int number = 100 + r ;
	if (p == 0 ){
		cout << number /100;
	} else if (p == 1){
		number/=10;
		cout << number%10;
	} else if(p==2){
	cout<< number %100; 
	}
} else {
	cout<<3;
}

}
