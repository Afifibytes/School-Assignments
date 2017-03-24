#include <iostream>
using namespace std;

void grade(char);

int main()
{
   char degree;
   cout << "Enter a character A~F" << endl;
   cin >> degree;
   grade(degree);
   return 0;
} 

void grade(char x)
{
  switch (x)
  {
    case 'A':
    case 'a':
       cout << "Excellent!" << endl;
    break;

    case 'B':
    case 'b':
       cout << "Very Good!" << endl;
    break;  

    case 'C':
    case 'c':
       cout << "Good!" << endl;
    break;

    case 'D':
    case 'd':
       cout << "Pass!" << endl;
    break;

    case 'F':
    case 'f':
       cout << "Fail!" << endl;
    break;
    
    default:
       cout << "Enter a character A~F" << endl;
  }
}
