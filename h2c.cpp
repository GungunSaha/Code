#include <iostream>
using namespace std ;
void canVote (){
    int n;
    cin>> n ;
    if (n>=18){
        cout<< "can vote" << endl;
    }
    else {
        cout << "not vote"<< endl;
    }
}
    int main(){
        canVote() ;
        return 0;
    }
