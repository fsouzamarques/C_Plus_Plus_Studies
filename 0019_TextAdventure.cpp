/*Build a Text Adventure
Overview
This project is slightly different than others you have encountered thus far on Codecademy. Instead of a step-by-step tutorial, 
this project contains a series of open-ended requirements which describe the project you’ll be building. There are many possible 
ways to correctly fulfill all of these requirements, and you should expect to use the internet, Codecademy, and other resources 
when you encounter a problem that you cannot easily solve.

Project Goals
Create a C++ text adventure with the storyline of your choosing. The program should use your knowledge of C++ conditionals, logic, and loops.*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int main() {

  int guilty;
  int notGuilty;
  int suspended;
  int answerOne;
  int answerTwo;
  int answerThree;

cout << "You have been selected for a Jury Duty, the trial is judging a father of three for stealing 3 eggs from the supermarket and the government proposed him a death sentence." << endl;
cout << "You are together with another jury member and have to come to a consensus of if what he did was wrong or partially right." << endl;
cout << "All your decisions will impact how the judgement proceeds and how the final decision will be made. You can get the father free to go, get him as guilty, straight to the death sentence, or suspend the trial and report the government heavy proposition" << endl;
cout << "The supermarket chain Woolworths is accusing Peter, a single father of three of stealing three eggs while shopping for milk and butter, which he paid for, but the eggs were found in his pocket while leaving the supermarket" << endl;
cout << "Peter defends himself and states that he already had the eggs he got from his mom's house on his way to the supermarket, where he went to buy milk and butter as the missing ingredients to make a cake for his kids. Woolworths has no video proving Peter got the eggs from one of the boxes." << endl;
cout << " " << endl;
cout << "Based on that information, do you think it's fair to condemn Peter to death sentence if proven he stole the eggs?" << endl;
cout << " " << endl;
cout << "Select your option:" << endl;
cout << "1) Yes, it is fair" << endl;
cout << "2) No, totally unfair" << endl;
cout << "3) I don't have enough information to decide" << endl;
cout << " " << endl;
cin >> answerOne;

if (answerOne == 1){
  guilty++;
}

else if (answerOne == 2){
  notGuilty++;
}

else if (answerOne == 3){
  suspended++;
}

else {
  cout << "Invalid input." << endl;
}

cout << " " << endl;
cout << "Before you can make your move, a Woolworths manager suddenly submits a new statement saying Peter looked suspicious while walking down the dairy aisle." << endl;
cout << "Peter defends himself and asks if he looked suspicious due to his heritage, since he had faced racism multiple times since moving down under." << endl;
cout << "Woolworths try to disregard Peter's last comment and adjourn the session, the judge refuses, and ask the jury how they are seeing it all so far?" << endl;
cout << " " << endl;
cout << "Select your option:" << endl;
cout << "1) It's impossible that he faced Racism in Australia" << endl;
cout << "2) It looks like he is being trapped by big corps" << endl;
cout << "3) I'm confused by the gist of it all." << endl;
cout << " " << endl;
cin >> answerTwo;

if (answerTwo == 1){
  guilty++;
}

else if (answerTwo == 2){
  notGuilty++;
}

else if (answerTwo == 3){
  suspended++;
}

else {
  cout << "Invalid input." << endl;
}
cout << " " << endl;
cout << "Regardless of the questioning, the government prosecutor approaches you during a break. He says, 'If you give him the death sentence, the government will reward you for upholding strict justice.' What is your final stance?" << endl;
cout << " " << endl;
cout << "Select your option:" << endl;
cout << "1) Push for the death sentence immediately." << endl;
cout << "2) Declare him guilty but refuse the death penalty, pushing for jail time instead." << endl;
cout << "3) Suspend the trial and report the government's obvious bribery to the media." << endl;
cout << " " << endl;
cin >> answerThree;

if (answerThree == 1){
  guilty ++;
}

else if (answerThree == 2){
  notGuilty = 99;
}

else if (answerThree == 3){
  suspended = 99;
}

else {
  cout << "Invalid input." << endl;
}

string result;
int max = 0;

if (guilty > max) {
  
  max = guilty;
  result = "You've declared Peter Guilty.";
  
}

if (notGuilty > max) {

  max = notGuilty;
  result = "You've declared Peter Innocent.";
  
}

if (suspended > max) {
  
  max = suspended;
  result = "Government is being sued, trial suspended for corruption.";
  
}


cout << result << endl;

  return 0;
}
