#include <iostream>
using namespace std;
int main(){
int a=0,b=100,y,c[100];
for(int i=0;i<6;i++){
  cin >> c[i];
   }
 for(int i=0;i<6;i++){
  if(c[i]%2==0){
   b=b>c[i]?c[i]:b;
   }
   else a=a>c[i]?a:c[i];
  }
  y=a>b?a-b:b-a;
  cout << y << endl;
  return 0;
 }
