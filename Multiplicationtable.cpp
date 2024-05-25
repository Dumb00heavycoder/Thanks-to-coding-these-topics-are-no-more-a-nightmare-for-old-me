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