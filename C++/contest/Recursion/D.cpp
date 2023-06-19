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

    // 1 << i = 2 ** i
    // 2 ** (i-1) == (1 << (i-1));

	int bla = (1 << (i-1));
	vector<string> before = obtenerVector(i-1);
	
	for(string line : before) {
		resultado.pb(string(bla, ' ') + line + string(bla, ' '));
	}

    //for(int o=0;o<i;o++){
        //resultado.pb(string(1 << (i-1),' ')+obtenerVector(i-1)[o]+string(1 << (i-1),' '));
    //}
    
    for(string line : before) {
    	resultado.pb(line+line);
    }
    
    //for(int o=0;o<i;o++){
        //resultado.pb(obtenerVector(i-1)[o]+obtenerVector(i-1)[o]);
    //}
    return resultado;
}


int main(){
    int g ;cin>>g;
    int e;
    while(g--){
    cin>>e;
    e+=1;
	  vector<string> hola = obtenerVector(e);
    	for(string r:hola){
        	cout<<r<<'\n';
    	}
}
}
