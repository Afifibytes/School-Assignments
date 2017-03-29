#include <iostream>
using namespace std;

void swap(int &x, int &y);

int main()
{
   int x, y;
   cout << "Enter 2 numbers: ";
   cin >> x >> y;
   cout << "Before: x = " << x << ", y = " << y << endl;
   swap(x,y);
   cout << "After: x = " << x << ", y = " << y << endl;
}

void swap(int &x, int &y)
{
   int temp;
   temp = x;
   x = y;
   y = temp;
}
