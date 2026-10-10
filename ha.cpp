#include <iostream>
using namespace std;
int main(){
int n;
cin >> n;
string binary ="" ;
if (n==0 ) {
    binary=binary ;
    return 0;
}
while (n>0) {
    binary= char((n%2)+ '0') + binary;
    n = n/2 ;
}
cout<< binary;
return 0;

}