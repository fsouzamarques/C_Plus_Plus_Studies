//Use the open space in review.cpp to practice what you learned about variables.
//Create a program that takes in the weight of an item and then calculates how much that item would weigh on Mars.

#include <iostream>
using namespace std;

int main() {
  // Declare Variables
double itemweight;
double marsweight;

//Ask for user input
cout << "Enter the weight of the item: " << endl;
cin >> itemweight;

//Convert the weight
marsweight = itemweight*0.38;

//Print final weight
cout << "Your item weights " << marsweight << "Kgs in Mars!" << endl;

return 0;
}
