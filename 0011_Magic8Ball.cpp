#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {

// Your future is here
srand(time(NULL));
int answer = rand() % 10;

cout << "MAGIC 8-BALL" << endl;


if (answer == 0){
  cout << "It is certain." << endl;
}

else if (answer == 1) {
  cout << "Without a doubt." << endl;
}

else if (answer == 2) {
  cout << "You may rely on it." << endl;
}

else if (answer == 3) {
  cout << "As I see it, yes." << endl;
}

else if (answer == 4) {
  cout << "Ask again later." << endl;
}

else if (answer == 5) {
  cout << "Better not tell you now." << endl;
}

else if (answer == 6) {
  cout << "Yes, definitely." << endl;
}

else if (answer == 7) {
  cout << "Most likely." << endl;
}

else if (answer == 8) {
  cout << "Signs point to yes." << endl;
}

else {
  cout << "Very doubtful." << endl;
}

return 0;

}
