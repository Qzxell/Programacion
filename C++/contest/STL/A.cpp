#include<bits/stdc++.h>
using namespace std;

int main (){
int h;cin>>h;
string m;
    while (h--){
        cin >>m;
    set<char> num;
        for(char j:m){
           num.insert(j); 
        }
        int n=int(num.size());
        if(n==1)cout<<-1<<'\n';
        else if (n==3||n==4) cout << 4<<'\n';
        else if(n==2){
            bool gg=false;
            for(char k:num){
                int f=count(m.begin(),m.end(),k);
                if (f==2) gg=true;
                else gg=false;
            }
            if(gg)cout <<4<<'\n';
            else cout << 6<<'\n';
        }
    }
}   

