#include <bits/stdc++.h>
using namespace std;

bool numberPrimo(int n ){
if (n ==0||n==1||n==4)return false;
for (int x =2;x< n /2; x++ ){
	if(n%x==0)return false;
}
return true;
}

int main(){
int n ;
vector<int> numeros;
for (int i =0 ; i < 10 ;i++){
cin>>n;
numeros.push_back(n);
}
int p=0;
	for(int i =0;i<10;i++){
		if(numberPrimo(numeros[i])) {
			cout<< "es primo: "<<numeros[i]<<endl;
			p++;
		}
	}
cout <<"La cantidad de numeros primos en el arreglo es: "<< p;
return 0;
}
