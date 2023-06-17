#include <bits/stdc++.h>
using namespace std;
#define pb push_back



vector<string> obtenerVector(int i) {
    vector<string> resultado;
    
    // Lógica para llenar el vector según el valor de i
    if (i == 1) {
        resultado.push_back(" /\\ ");
        resultado.push_back("/__\\");
        return resultado;
    } 
    for(int o=0;o<i;o++){
        resultado.pb(string(i,' ')+obtenerVector(i-1)[o]+string(i,' '));
    }
    for(int o=0;o<i;o++){
        resultado.pb(obtenerVector(i-1)[o]+obtenerVector(i-1)[o]);
    }
    return resultado;
}


int main(){
int e;cin>>e;
for(int r:obtenerVector(e)){
    cout<<r<<'\n';
}
}
