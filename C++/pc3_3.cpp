#include <bits/stdc++.h>
using namespace std;

bool micomp( int n , int p){
if(n , p )return false;
else return true;
}

int main (){
int n;
vector<int> numbers;
for (int i =0; i <20; i++){
	n= 1+ rand() %100;
	numbers.push_back(n);
}
for (int t:numbers){
	cout <<t<<"-";
}
sort(numbers.begin(),number.end(),micomp());
for (int t:numbers){
	cout <<t<<"-";
}

}
