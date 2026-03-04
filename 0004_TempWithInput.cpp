//Let’s go back to the temperature.cpp that we wrote. This time, instead of giving tempf a value of the current temperature in New York:
//Let’s ask the user what the temperature is using cin
//Preview: Docs Loading link description

#include <iostream>

int main() {
  
  double tempf;
  double tempc;
  
  // Ask the user
  std::cout << "Enter the temperature in Fahrenheit: \n";
  std::cin >> tempf;
  
  
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}
