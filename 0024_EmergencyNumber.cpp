/*Let’s build a function that prints out the current emergency number, whatever it is from now on.

Above main(), define a void function get_emergency_number() that accepts one parameter:

a string with the name emergency_number
Checkpoint 2 Passed
2.
In get_emergency_number(), print out “Dial “ with the emergency_number that was passed into the function.

Checkpoint 3 Passed
3.
Call get_emergency_number() in main() to see the number get printed!*/


#include <iostream>

// Define get_emergency_number() below:
void get_emergency_number(std::string emergency_number) {
  
  std::cout << "Dial " << emergency_number;
  
}

int main() {
  
  // Original emergency services number 
  std::string old_emergency_number = "999";
  
  // For nicer ambulances, faster response times
  // and better-looking drivers
  std::string new_emergency_number = "0118 999 881 999 119 725 3";
  
  // Call get_emergency_number() below with
  // the number you want!
  get_emergency_number(new_emergency_number);
  
}
