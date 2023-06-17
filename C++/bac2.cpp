#include <bits/stdc++.h>
using namespace std;

vector<int> numeros;
vector<bool> used(15,false);

void print(){
  cout<<"{";  
  bool first=true;
  for (int p:numeros){
    if(!first) cout<<", ";
      cout <<  p ;
  first=false;
    }
    cout <<"}\n";
} 

void bactra(int n){
    if((int)numeros.size() == n) return;
    for(int p=1;p<=n;p++){
        if (!used[p]) {
            numeros.push_back(p);
            used[p]=true;
            print();
            bactra(n);
            used[p]=false;
            numeros.pop_back();
            
        }    
    }
    
}

int main() {
    int n = 5; 
bactra(n);
    return 0;
}
