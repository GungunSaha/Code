#include <iostream>
using namespace std ;
int SimpleIinterest (int p,int r,int t){
    int SI = (p*r*t)/100 ;
    return SI ;
}
int main (){
    int answer =  SimpleIinterest(1000,5,2);
    cout << answer << endl;
    return 0 ;
}