//Rock, paper, scissor, lizard, spock

/* Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
(and as it always has) Rock crushes Scissors. */

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int main() {

// Live long and prosper

srand (time(NULL));
  
int computer = rand() % 3 + 1;

int user = 0;


//CHOOSE YOUR FIGHTER

cout << "XXXXXXXXXXXXXXXXXXXXXX" << endl;
cout << "ROCK, PAPER, SCISSORS!" << endl;
cout << "XXXXXXXXXXXXXXXXXXXXXX" << endl;
cout << " " << endl;
cout << "1) ✊" << endl;
cout << "2) ✋" << endl;
cout << "3) ✌️" << endl;
cout << " " << endl;
cout << "Shoot!" << endl;

cin >> user;

cout << " " << endl;

//User choice printed

if (user == 1) {
  cout << "You choose ✊" << endl;
}

else if (user == 2) {
  cout << "You choose ✋" << endl;
}

else {
  cout << "You choose ✌️" << endl;
}

//CPU choice printed

if (computer == 1) {
  cout << "CPU chose ✊" << endl;
}

else if (computer == 2) {
  cout << "CPU chose ✋" << endl;
}

else {
  cout << "CPU chose ✌️" << endl;
}

//Results

if (user == computer) {
  cout << "It's a Tie!" << endl;
}

else if (user == 1) {
  if (computer == 2) {
    cout << "Dang, you lost!" << endl;
  }
  if (computer == 3) {
    cout << "You Won!!! Hell yeah :D" << endl;
  }
}

else if (user == 2) {
  if (computer == 1) {
    cout << "Congrats, you won!" << endl;
  }
  if (computer == 3) {
    cout << "You got cut, you lost!" << endl;
  }
}

else if (user == 3){
  if (computer == 1) {
    cout << "You lost, the rock broke your scissor ):" << endl;
  }
  if (computer == 2) {
    cout << "You've cut the paper, you won!" << endl;
  }
}

  return 0;
}
