#include <iostream>
using namespace std;

int power(int, int);

int main()
{
   int x,y;
   cout << "Enter a number.. " << endl;
   cin >> x;
   cout << "Enter a power.. " << endl;
   cin >> y;
   cout << x << " to the power of " << y << " = " << power(x,y) << endl;
}

int power (int base, int expo)
{
   if (expo < 1)
   {
       return 1;
   }
   else
   {
       return base * power (base, expo-1);
   }
}
  
