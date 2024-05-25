// Pnc and binomial theoram were one of the toughest chapters during my highschool and i practied solving factorials alot
//but the idea of having a program which can tell me every factorial is exciting 

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