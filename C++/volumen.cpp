#include <bits/stdc++.h>
#include <vector>
using namespace std;

int calcular(float u, float o ){
	return (9.81)*u-o;
}

int main (){
int n =3;
vector<float> pesosPromedios, tensiones;
int y ,o;
for (int i =0; i<n ; i++) {
cin >> y ;
cout<<" " ;
cin >> o ;
cout << endl;
pesosPromedios.push_back(y);
tensiones.push_back(o);
}
for (int i =0; i<n ; i++) {
cout << calcular(pesosPromedios[i],tensiones[i])<<endl;
}
}
