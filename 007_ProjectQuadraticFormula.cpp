//Photo with Project Info on the folder

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
  
  double a;
  double b;
  double c;

  cout << "Enter a: " << endl;
  cin >> a;

  cout << "Enter b: " << endl;
  cin >> b;

  cout << "Enter c: " << endl;
  cin >> c;

  double root1;
  double root2;

  root1 = (- b + sqrt(b * b - 4 * a * c)) / (2 * a);

  root2 = (- b - sqrt(b * b - 4 * a * c)) / (2 * a);

  cout << "Root 1 is " << root1 << endl;
  cout << "Root 2 is " << root2 << endl;

  return 0;
  
}
