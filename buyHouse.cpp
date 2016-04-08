#include<iostream>
#include<math.h>
using namespace std;
int main(){
 double N,K,W;
 cin >> N >> K;

for (int M=1;M <= 21;M++){
    W=200*pow(1+K*0.01,M);
   if(M<21){
   if( M*N>200*pow(1+K*0.01,M-1)){
      cout << M << endl;
    break;
    }
   }
  else cout << "Impossible" << endl; 
  }
  return 0;
 }
