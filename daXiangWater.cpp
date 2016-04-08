#include <iostream>
using namespace std;
int main(){
 double V,PI=3.14159;
 int n,h,r;
 cin >> h >> r;
 V=PI*r*r*h;

 n=20000/V+1;
 cout << n <<endl;
 return 0;
}
