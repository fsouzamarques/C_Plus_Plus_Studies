#include <iostream>
#include <string>
using namespace std;

int main() {

  double earthWeight;
  double NewWeight;
  int selection; 

  cout << "What is your Earth Weight? " << endl;
  cin >> earthWeight;

  cout << "Select the number for the Planet you want to fight on: " << endl;
  cout << "1 - Mercury" << endl;
  cout << "2 - Venus" << endl;
  cout << "3 - Mars" << endl;
  cout << "4 - Jupiter" << endl;
  cout << "5 - Saturn" << endl;
  cout << "6 - Uranus" << endl;
  cout << "7 - Neptune" << endl;
  cin >> selection;

  if (selection == 1) {
    cout << "Your Weight in Mercury is " << earthWeight * 0.38 << endl;
  }

  else if (selection == 2) {
    cout << "Your Weight in Venus is " << earthWeight * 0.91 << endl;
  }

   else if (selection == 3) {
    cout << "Your Weight in Mars is " << earthWeight * 0.38 << endl;
  }

   else if (selection == 4) {
    cout << "Your Weight in Jupiter is " << earthWeight * 2.34 << endl;
  }

   else if (selection == 5) {
    cout << "Your Weight in Saturn is " << earthWeight * 1.06 << endl;
  }

   else if (selection == 6) {
    cout << "Your Weight in Uranus is " << earthWeight * 0.92 << endl;
  }

   else if (selection == 7) {
    cout << "Your Weight in Neptune is " << earthWeight * 1.19 << endl;
  }

  else {
    cout << "You have not selected a valid planet! Start again." << endl;
  }


  
  
}
