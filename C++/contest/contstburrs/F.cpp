#include <bits/stdc++.h>
using namespace std;

int main (){
int m,n;
cin>>m>>n;

string j;cin>>j;
vector<char>num;
for(char d:j){
    num.push_back(d);
}
int ceros=0;
for(int o=0;o<n;o++){
if(j[o]=='0')ceros+=1;
}
n+=ceros;
for(int i=0;i<n;i++){
num[i]='0';
}
if(n>0)num[0]='1';
if(n==1)num[0]='0';
for(char d:num){
cout<<d;}
}



