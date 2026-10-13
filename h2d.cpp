#include <iostream>
#include <cmath>
using namespace std ;
double SIPcalculator ( int P,int R, int N){
    double i= R/(12.0 *100) ;
    int n =N*12 ;
    double SIP = P * (( pow((i+1),n)-1)/i)*(1+i) ;
    return SIP ;
}
int main(){
    double result = SIPcalculator (5000,12,10);
    cout << (long long) result << endl;
    return 0 ;
}