#include <bits/stdc++.h>
using namespace std;

int hola(int n,int m){
if(n%m==0)return 0;
return ((n+m)/m)*m - n;
}


int main (){
int n,a,b;
cin>>n;
while(n--){
    cin >> a>>b;
    cout<<hola(a,b)<<'\n';
}
}
