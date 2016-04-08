#include<iostream>
using namespace std;
int main(){
 int a,b[5];
  cin >> a;
 int sum = 0;
 for(int i=0; i<5;i++){
  cin  >> b[i];
  }
 for (int i=0;i<5;i++)
  if (a>b[i])
  sum = sum + b[i];
  cout << sum << endl;
 return 0;
}
