#include <bits/stdc++.h>
using namespace std;

int main(){
int n,a,b,c;

while(cin >>n>>a>>b>>c&&!(a==0 and a==0 and c==0 and n==0 )){
int h = (n-a+40)%40;
int y = (b-a+40)%40;
int k = (b-c+40)%40;
cout<< 720 + h*9 + 360 + y*9 + k*9<<"\n";  
}


}
