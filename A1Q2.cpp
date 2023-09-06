#include <iostream>
#include <limits.h>
#include <float.h>


using namespace std;

int main(){
    cout << "Range of integers in C++ is: "<< INT_MIN<<":"<<INT_MAX;
    cout << "\nRange of floats in C++ is: "<< FLT_MIN<<":"<<FLT_MAX;
    cout << "\nRange of characters in C++ is:"<< CHAR_MIN <<":"<<CHAR_MAX;
    cout << "\nRange of long integers in C++ is: "<<LONG_LONG_MIN<<":"<<LONG_LONG_MAX;
    cout << "\nRange of short integers in C++ is: "<<SHRT_MIN<<":"<<SHRT_MAX;
    return 0;
}
