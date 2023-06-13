#include <bits/stdc++.h>
#include <vector>

using namespace std;

int funn(int t){	
if (t ==0)return 0 ;
else if (t%10>0) return t%10;
else funn(t/10);
return 0;
}


int main(){
vector<int> numerosx;
vector<int> numerosy;
int n=0; 
int t,o;
do {
cin >> t;
cin >> o ;
numerosx.push_back(t);
numerosy.push_back(o);
n ++;

}while (t > 0 && o > 0);
int suma;
for (int i = 0 ; i<n ; i++){
	suma = 0;
	t=numerosx[i];
	o=numerosy[i];
	for(t;t<=o;t++){
		suma += funn(t);		
	}
	cout << suma<< endl ;
}
}
