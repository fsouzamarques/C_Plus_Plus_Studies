/* The logic:

Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
(and as it always has) Rock crushes Scissors.
We will first tackle Rock, Paper, Scissors first, before making it into Rock, Paper, Scissors, Lizard, Spock! */

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int main() {

// Live long and prosper

srand (time(NULL));
  
int computer = rand() % 5 + 1;

int user = 0;


//CHOOSE YOUR FIGHTER

cout << "XXXXXXXXXXXXXXXXXXXXXX" << endl;
cout << "ROCK, PAPER, SCISSORS!" << endl;
cout << "+ LIZARD AND SPOCK!!!!" << endl;
cout << "XXXXXXXXXXXXXXXXXXXXXX" << endl;
cout << " " << endl;
cout << "1) ✊" << endl;
cout << "2) ✋" << endl;
cout << "3) ✌️" << endl;
cout << "4) 🦎" << endl;
cout << "5) 🖖" << endl;
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

else if (user == 3) {
  cout << "You choose ✌️" << endl;
}

else if (user == 4) {
  cout << "You choose 🦎" << endl;
}

else {
  cout << "You choose 🖖" << endl;
}

//CPU choice printed

if (computer == 1) {
  cout << "CPU chose ✊" << endl;
}

else if (computer == 2) {
  cout << "CPU chose ✋" << endl;
}

else if (computer == 3) {
  cout << "CPU chose ✌️" << endl;
}

else if (computer == 4) {
  cout << "CPU chose 🦎" << endl;
}

else {
  cout << "CPU chose 🖖" << endl;
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
   if (computer == 4) {
    cout << "You Won!!! You've crushed Lizard" << endl;
  }
   if (computer == 5) {
    cout << "Spock Smashed you, you lost ):" << endl;
  }
}

else if (user == 2) {
  if (computer == 1) {
    cout << "Congrats, you won!" << endl;
  }
  if (computer == 3) {
    cout << "You got cut, you lost!" << endl;
  }
  if (computer == 4) {
    cout << "Lizard ate you, you lost!" << endl;
  }
  if (computer == 5) {
    cout << "You won, you disproved Spock!" << endl;
  }
}

else if (user == 3){
  if (computer == 1) {
    cout << "You lost, the rock broke your scissor ):" << endl;
  }
  if (computer == 2) {
    cout << "You've cut the paper, you won!" << endl;
  }
  if (computer == 4) {
    cout << "You've decapitated Lizard, you won!" << endl;
  }
  if (computer == 5) {
    cout << "Spock smashed you, you lost buddy!" << endl;
  }
}

else if (user == 4){
  if (computer == 1) {
    cout << "You lost, the rock crushed you ):" << endl;
  }
  if (computer == 2) {
    cout << "You won, you ate the paper! Hell yeah!" << endl;
  }
  if (computer == 3) {
    cout << "You've got decapitated, you lost!" << endl;
  }
  if (computer == 5) {
    cout << "You've poisoned Spock, good job! You won!" << endl;
  }
}

else if (user == 5){
  if (computer == 1) {
    cout << "You've vaporized the Rock! You Won!" << endl;
  }
  if (computer == 2) {
    cout << "You lost!" << endl;
  }
  if (computer == 3) {
    cout << "You crushed the Scissor, you won!" << endl;
  }
  if (computer == 4) {
    cout << "You've got poisoned, you lost!" << endl;
  }
}

  return 0;
}

  
