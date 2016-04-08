#include <iostream>
using namespace std;
int main(){
 int n;
 cin >> n;
 int a,b,c;
 a=n/100;
 b=n/10-10*a;
 c=n-100*a-10*b;
cout << a <<endl<< b <<endl<<c <<endl;
 return 0;
}
