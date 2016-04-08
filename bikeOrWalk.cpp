#include<iostream>
using namespace std;
int main(){
 int n;
 cin >> n;
 for(int i=0;i<n;i++){
 double a[n];
  cin >> a[i];
  double t1 = a[i]/3+50;
  double t2 = a[i]/1.2;
 if(t1<t2)cout << "Bike" << endl;
 else if(t1>t2)cout << "Walk" << endl;
 else cout << "ALL" << endl;
 }
 return 0;
}
