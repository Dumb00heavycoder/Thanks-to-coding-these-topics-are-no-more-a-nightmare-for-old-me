// Honestly, during my elementry school division was something i was not at all interested in,
//So here i am again tackling my childhood fear with coding

#include <iostream>
using namespace std; 

int main () { 
    int divisor,dividend,remainder; 
    double quotient; 

    cout << "Enter dividend" << endl; 
    cin >> dividend ; 

    cout << "Enter divisor" << endl; 
    cin >> divisor ; 

    quotient = dividend / divisor ;
    remainder = dividend % divisor ; 

    cout <<"Dividend ="<< dividend << endl;
    cout <<"Divisor ="<< divisor << endl;
    cout <<"quotient ="<< quotient << endl;
    cout <<"remainder ="<< remainder << endl;
    return 0;
}