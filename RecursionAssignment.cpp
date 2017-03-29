#include <iostream>
using namespace std;

void printNums(int);

int main()
{   
   int x;
   cout << "Enter a number: ";
   cin >> x;
   printNums(x);
}
void printNums(int x)
{
   if(x <=0)
   {
     return;
   }
   else
   {
     cout << x << endl;
     return printNums(x-1);
   }
}


