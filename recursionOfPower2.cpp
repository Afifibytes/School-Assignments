#include <iostream>
using namespace std;

float mys(float, float y=-1);

int main ()
{
   float x = 9.0;
   cout << mys(x) << endl;
}

float mys( float x, float y)
{
   if (x <= 0.0)
   { 
     return 0.0;
   }
   else
   {
     y+=2;
     return y + mys(x-1, y);
   }
}
