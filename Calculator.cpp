#include <iostream>
#include "Calculator.h"
using namespace std;

int main()
{
   int x,y;
   cin >> x >> y;
   cout << fadd(x,y) << endl;
   cout << fsub(x,y) << endl;
   cout << fmul(x,y) << endl;
   cout << fdiv(x,y) << endl;
}
