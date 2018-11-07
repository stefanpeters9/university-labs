// common_cpp_mistakes.cpp
// This program contains some common C++ coding errors
#include <iostream>
using namespace std; 
int main()
{
   
   int integer2,integer1;  // second number to be input by user
   int result;    // variable in which sum will be stored

   cout << "Enter first integer: ";  // prompt; "\n" represents a new line
   cin >> integer1;                  // read an integer

   cout << "Enter second integer: "; // prompt
   cin >> integer2;                  // read an integer

   result = integer1 / integer2 * integer1 + integer2;

   cout << "The result is " << result << "\n"; // print result
   
   return 0;   // indicate that program ended successfully
}
 // end function main