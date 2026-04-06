/*Inside of main(), call rand() with the modulo operator to generate a random number between 0 and your favorite number. For example, rand() % 29 would output a random number between 0 and 28.

Assign the resulting value to a new int variable called the_amazing_random_number.

Print the_amazing_random_number to the terminal.*/

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
  
  // This seeds the random number generator:
  srand (time(NULL));
  
  // Use rand() below to initialize the_amazing_random_number
  int the_amazing_random_number = rand() % 19;
  
  cout << the_amazing_random_number << endl;
}
