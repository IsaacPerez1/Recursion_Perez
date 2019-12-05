/*A recursive function contains a call to its self.
stops when the base case is reached. the base case in this is program is when n == 0.
breaks the problem down into smaller problems
Each time a recursive function is called, a new copy of the function runs, with new instances of parameters and local variables created
there are two types of recursion. direct and indirect
sources: Gaddis ch. 19

*/

#include<iostream>
#include "input_validation.h"
using namespace std;
int factorial(int n);
int main()
{
    int n;
     cout << "enter a negative number to exit" ;
    do{
    cout << "\nEnter a positive integer: ";
     n =validateInt(n);
    cout << "Factorial of " << n << " = " << factorial(n);
    
    }while(n>0);
    
    return 0;
}
int factorial(int n)
{
    if(n == 0)// base case
    return 1;
        
    else
        return n * factorial(n - 1);// recursion
        
}