#include<bits/stdc++.h>
using namespace std;

int main(){
int t;cin>>t;
while(t--){

int votosp=0;
int votosn=0;
    int n;cin>>n;
    while(n--){
        int a;cin>>a;
        if(a==1)votosp+=1;
        if(a==2)votosn+=1;
        if(a==3){
            if(votosn>votosp)votosn+=1;
        }else {
            votosp+=1;
        }
    }
cout<<votosp<<'\n';

}
}
