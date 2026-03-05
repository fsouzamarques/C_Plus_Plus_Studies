//You just returned from a trip to South America. The countries you visited were Colombia, Brazil, and Peru. You arrived back in your country with some foreign currencies from these three countries.
//Write a C++ Preview: Docs C++ is a very powerful programming language for performance-critical applications that rely on speed and efficient memory management. 
//It’s used in a wide range of industries including software and game development, robotics, microcontrollers, VR/AR, and scientific computing.
//program called currency.cpp that prompts the user for the amount of each foreign currency.
//Your program should then convert the amount entered by the user and display the total amount of USD.


#include <iostream>
#include <string>
using namespace std;

int main() {
  double pesos;
  double pesosrate = 0.00026;
  double reais;
  double reaisrate = 0.19;
  double soles;
  double solesrate = 0.29;
  double dollars;

  //input the money

  cout << "Enter number of Colombian Pesos: " << endl;
  cin >> pesos;

  cout << "Enter number of Brazilian Reais: " << endl;
  cin >> reais;

  cout << "Enter number of Peruvian Soles: " << endl;
  cin >> soles;

  //Conversion Rates
  //Pesos = 0.00026
  //Reais = 0.19
  //Soles = 0.29

  dollars = (pesos * pesosrate) + (reais * reaisrate) + (soles * solesrate);
  
  cout << "You have in US Dollars = $" << dollars << endl;
  return 0;
}
