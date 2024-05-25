//I never enjoyed mugging up tables as a little kid 
//For year everyone told me it is important so i went with it and learned them throughout my middle school
//Now i would like to create a program which can solve that issue for the middle school me
#include <iostream> 
using namespace std; 

int main (){ 
    int n; 
    cout <<"Enter a number and we'll give you the multiplication table of that number"<< endl; 
    cin >> n; 

   for (int i=1; i<=10; ++i){ 
    cout << n << " * " << i << " = " << n*i << endl;
    }
    return 0; 

}