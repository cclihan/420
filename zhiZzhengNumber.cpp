#include<iostream>
using namespace std;
int main(){
 int n;
 cin >> n;
 for(int i=10;i<n;i++){
  int a=i/10+i%10;
  if(i%a == 0)cout << i << endl;
  }
  return 0;
 }
