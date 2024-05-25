#include <iostream>
using namespace std;

int main(){
   int n;
   long factorial= 1.0;

   cout << "Enter a number"<< endl; 
   cin >> n;

   if(n<0){ 
    cout << "ERROR!"<< endl;
    cout << "Negative number factorial does not exist"<< endl; 
    } else{
        for(int i=1; i<=n; ++i){
            factorial *= i;
        }
        cout << "factorial of " << n << " = "<< factorial;
    }
    return 0;
}