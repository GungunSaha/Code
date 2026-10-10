#include <iostream> 
using namespace std;
int main (){
    // explicit type casting
    // 1. double to int
    //double pi = 3.14159265 ;
    //int intpi = (int)pi ; // explicit conversion from double to int
    //cout << intpi << endl;

    // 2. float to char 
    //float floatno = 65.25 ;
    //char charvalue = (char)floatno ; // explicit conversion from float to char
    //cout << charvalue << endl;

    // 3. int to float
    //int a = 10 ;
    //int b = 3.0 ;
    //float c = a/b ;
    //cout << c << endl;

    //float a = 10 ;
    //int b = 3.0 ;
    //float c = a/b ;
    //cout << c << endl;

    int a = 10 ;
    int b = 3 ;
    float c = a / (float)b ;
    cout << c << endl;

}