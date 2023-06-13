#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main (){
int n;cin >>n;
vector<int> numberprove(n);
for(int i =0;i<n;i++){
	cin >> numberprove[i];
}
int y;
int cubes;
for (int i =0;i<n;i++){
	y=numberprove[i];
	cubes=y/2;
	if ((y - 2*(y/2)) < 2 )cubes-=1;
	cout << cubes*(cubes+1)/2<<endl;
}
}
