#include <iostream>
using namespace std;

void evenOrOdd(int);

int main()
{
   int x;
   cout << "Enter a number: ";
   cin >> x;
   evenOrOdd(x);
} 

//function determines the number either even or odd
void evenOrOdd(int x)
{
   if(x%2 ==0)
   {
   cout << x << " is an even number" << endl; 
   }
   else
   {
   cout << x << " is an odd number " << endl; 
   }
}
