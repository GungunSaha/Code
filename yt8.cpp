#include <iostream>
using namespace std ;

int sum (int a, int b){
   int totalsum = a+b ;
    return totalsum ;
}

int getmultiplication ( int x,int y, int z){
    int result = x*y*z ;
    return result ;
}
void printNameTentimes (){
    for (int i= 1 ; i<=10 ; i++)
    cout<< "Gungun" << endl;
}
void printMultiples (int num){
    for ( int i=1 ; i<=10 ; i++)
    cout << num*i << endl;
}
int convertintocelcius(int far){
    int celcius = (far-32)*5/9 ;
    return celcius ;
}
char convertionintouppercase (char ch){
    char answer= ch-'a'+'A' ;
    return answer;
}

int main (){
    // function call
    //int result = sum(5,10) ;
    //cout<< result << endl ;

    //int multiplicationanswer = getmultiplication( 5,4,3);
    //cout << multiplicationanswer << endl;

    //printNameTentimes() ;

    //int m=5 ;
    //printMultiples (5);

    //int far = 32;
    //int ans = convertintocelcius(far);
    //cout << "in celcius:" << ans << endl;

    char result = convertionintouppercase ('k') ;
    cout<< result << endl;

    
    return 0 ;
}