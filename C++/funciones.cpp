#include<bits/stdc++/h>
using namespace std;

//no se puede cmodificar 
void f2(const vector<int>& arr){

}
// podemos modificarlo
void f2 ( vector<int>& arr){

}
//pasamos una copia, se puede modificar pero solo estas modificando la copia 
void f2 ( vector<int> arr){

}

int main (){
  int n = 10000;
  vector <int> arr(n);
  for (int i = 0; i < n; i++) {
    arr[i] = i;
  }
  f1(arr);
  f2(arr);
  f3(arr);
  return (0);

}
