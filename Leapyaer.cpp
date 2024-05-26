//I never understood leap years and it was very hard for me to keep a track of so i used to google everytime.
//well here's the power of programming, now i would solve this problem on my own

#include <iostream> 
using namespace std;

int main(){ 
    int year; 
    cout << "Provide the year and we'll tell you if its a leap year or not" << endl;
    cin >> year; 
    // leap year if perfectly divislibe by 400
    if(year % 400 == 0){
        // % tells the remainder so if remainder is 0 it means its divisible 
        cout << year << " is a leap year"<< endl;
    }
    // not a leap year if divisible by 100 but not by 400 
    else if (year % 100 == 0){ 
        cout << year<< " is not a leap year"<< endl;
    }
    // leap year if not divisible by 100 but by 4
    else if(year % 4== 0){ 
        cout << year << " is a leap year"<< endl; 
    }
    else {
        cout << year << " is not a leap year" << endl; 
    }
    return 0;
}