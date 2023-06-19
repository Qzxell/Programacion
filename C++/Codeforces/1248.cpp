#include <bits/stdc++.h>
using namespace std;

int main(){
int c;cin>>c;
while(c--){
    int dp,jd;cin>>dp;
    int pd=0,pj=0,impd=0,impj=0;
    vector<int> dps(dp)  ;
    for(int i=0;i<dp;i++){
        cin>>dps[i];
        if(dps[i]%2==0)pd+=1;
        else impd+=1;
    }
    cin>>jd;
    vector<int>jds(jd);
    for(int i=0;i<jd;i++){
        cin>>jds[i];
        if(jds[i]%2==0)pj+=1;
        else impj+=1;
    }
   cout<<impj*1ll*impd+pd*1ll*pj<<'\n'; 
}

}
