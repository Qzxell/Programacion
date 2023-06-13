#include <bits/stdc++.h>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main (){
int n,p;
vector<int> numbers;
for (int i =0; i <20; i++){
	n= 1+ rand() %10;
	numbers.push_back(n);
}
for (int t:numbers){cout<<t<<"-";}
sort(numbers.begin(),numbers.end());
cout<<endl;
int conta=1;
bool hubo=false;
for (int i =1; i<=20; i ++){
if (numbers[i]==numbers[i-1]){
	conta++;

	if (conta==3){
		hubo=true;
		cout<<"R:" << numbers[i]<<"  ";
	}
}else{
	conta=1;
}

}
if (!hubo) cout << "no hay exactamente 3 repetidos";

}
