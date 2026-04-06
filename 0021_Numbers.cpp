/*Optional: Write a program to find the sum of even numbers and the product of odd numbers in a vector.

For example:

Suppose we have a vector that is {2, 4, 3, 6, 1, 9}.

Then the program should output:

Sum of even numbers is 12
Product of odd numbers is 27*/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

  int total_even = 0;
  int product_odd = 1;

vector<int> numbers = {2, 4, 3, 6, 1, 9};

for (int i = 0; i < numbers.size(); i++) {

if (numbers[i] % 2 == 0) {

  total_even = total_even + numbers[i];

} else {

  product_odd = product_odd * numbers[i];

}

}

cout << "Sum of even: " << total_even << endl;
cout << "Product of odd: " << product_odd << endl;

  return 0;
}
