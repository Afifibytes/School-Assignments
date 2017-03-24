#include <iostream>
using namespace std;

//For loop prints odd nums 13 -> 33 except 17

int main()
{
   for(int i=13; i<=33; i+=2)
   {
      if(i==17)
      continue;
      cout << i << endl;
   }
   return 0;
} 
