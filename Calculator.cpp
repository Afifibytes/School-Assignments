#include <iostream>
#include "Calculator.h"
using namespace std;

int main()
{
   int firstInput,secondInput; 
   cin >> firstInput >> secondInput;
   cout << fadd(firstInput,secondInput) << endl;
   cout << fsub(firstInput,secondInput) << endl;
   cout << fmul(firstInput,secondInput) << endl;
   cout << fdiv(firstInput,secondInput) << endl;
}
