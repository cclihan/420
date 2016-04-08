#include <iostream>
using namespace std;
int main(){
int n,a[100],max=0;
 cin >> n;
 for(int i=0;i<n;i++){
  cin >> a[i];
 }
  for(int i=0;i<n;i++){
   max=max>a[i]?max:a[i];
   }
 cout << max << endl;
 return 0;
 }
