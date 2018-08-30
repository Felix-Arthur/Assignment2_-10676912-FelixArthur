#include <iostream>
//A program to determine Prime Numbers.
using namespace std;

int main()
{
   //Initialization of variables
   int number,i;
   bool isPrime = true;
   cout << "Please enter the number" << endl;
   cin >> number;
   for(i = 2; i <= number/2; ++i)
   {
       if (number % i == 0)
       {
          isPrime = false;
       break;
       }
    }
    if (isPrime)
        cout << "The number entered is a Prime number" << endl;
    else
        cout << "The number entered is not a Prime number" << endl;
    return 0;
}
