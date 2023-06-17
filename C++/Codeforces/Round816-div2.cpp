#include <bits/stdc++.h>
using namespace std;

int main(){
int n,m,k;
cin >> k;
while(k--){
    cin >> n>>m;
    int sal=n+m-2;
     
    if (n<m){
         sal+=n  ;
    }else{
         sal+= m ; 
    }
    if(n==1 and m==1)sal=0;
    cout<<sal<<"\n";
}


}
