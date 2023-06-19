#include<bits/stdc++.h>
using namespace std;

int main(){
int m,n;cin>>m>>n;
vector<int> rigthh(m),leftt(n);
for(int i =0;i<m;i++){
    cin>>rigthh[i];
}
reverse(rigthh.begin(),rigthh.end());
for(int i =0;i<n;i++){
    cin>>leftt[i];
}
reverse(leftt.begin(),leftt.end());
int min;
if(n<=m)min=n;
else min=m;

vector<int>diferencias;
for(int i=0; i<min;i++){
    if(leftt[i]-rigthh[i]>=0)diferencias.push_back(leftt[i]-rigthh[i]);
    else diferencias.push_back(rigthh[i]-leftt[i]);
}
sort(diferencias.begin(),diferencias.end());
cout<<diferencias[min-1]<<'\n';
}
