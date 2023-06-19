#include <bits/stdc++.h>
using namespace std;

int main(){
int c;
cin>>c;
while(c--){
int h;cin>>h;
vector<int> num;
for(int i=0;i<h;i++){
int p;cin>>p;
num.push_back(p);
}
sort(num.begin(),num.end());
int min=num[0];
int max=num[h-1];
cout << max-min<<'\n';
}
}
