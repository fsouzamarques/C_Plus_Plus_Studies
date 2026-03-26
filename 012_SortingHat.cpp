//The Hogwarts School of Witchcraft and Wizardry welcomes you! First-year students must go through the annual Sorting Ceremony.

//The Sorting Hat is a talking hat at Hogwarts that magically determines which of the four school Houses each new student belongs most to:

//gryffindor
//hufflepuff
//ravenclaw
//slytherin

//Write a sortinghat.cpp program that asks the user some questions and places them into one of the four Houses based on their answers!

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {

int gryffindor;
int hufflepuff;
int ravenclaw;
int slytherin;

int answer1;
int answer2;
int answer3;
int answer4;


//QUESTION 1


cout << "The Sorting Hat Quiz!" << endl;
cout << " " << endl;
cout << "Q1) When I'm dead, I want people to remember me as:" << endl;
cout << " " << endl;
cout << "1) The Good" << endl;
cout << "2) The Great" << endl;
cout << "3) The Wise" << endl;
cout << "4) The Bold" << endl;
cout << " " << endl;
cout << "Insert the number of your answer: " << endl;

cin >> answer1;

if (answer1 == 1){
  hufflepuff++;
}

else if (answer1 == 2){
  slytherin++;
}

else if (answer1 == 3){
  ravenclaw++;
}

else if (answer1 == 4){
  gryffindor++;
}

else {
  cout << "Invalid input." << endl;
}


//QUESTION 2


cout << "Q2) Dawn or Dusk" << endl;
cout << " " << endl;
cout << "1) Dawn" << endl;
cout << "2) Dusk" << endl;
cout << " " << endl;
cout << "Insert the number of your answer: " << endl;

cin >> answer2;

if (answer2 == 1){
  gryffindor++;
  ravenclaw++;
}

else if (answer2 == 2) {
  hufflepuff++;
  slytherin++;
}

else {
  cout << "Invalid input." << endl;
}


//QUESTION 3


cout << " " << endl;
cout << "Q3) Which kind of instrument most pleases your ear?" << endl;
cout << " " << endl;
cout << "1) The violin" << endl;
cout << "2) The trumpet" << endl;
cout << "3) The piano" << endl;
cout << "4) The drum" << endl;
cout << " " << endl;
cout << "Insert the number of your answer: " << endl;

cin >> answer3;

if (answer3 == 1) {
  slytherin++;
}

else if (answer3 == 2) {
  hufflepuff++;
}

else if (answer3 == 3) {
  ravenclaw++;
}

else if (answer3 == 4) {
  gryffindor++;
}

else {
  cout << "Invalid input." << endl;
}



//QUESTION 4



cout << " " << endl;
cout << "Q4) Which road tempts you most?" << endl;
cout << " " << endl;
cout << "1) The wide, sunny grassy lane" << endl;
cout << "2) The narrow, dark, lantern-lit alley" << endl;
cout << "3) The twisting, leaf-strewn path through woods" << endl;
cout << "4) The cobbled street lined (ancient buildings)" << endl;
cout << " " << endl;
cout << "Insert the number of your answer: " << endl;

cin >> answer4;

if (answer4 == 1) {
  hufflepuff++;
}

else if (answer4 == 2) {
  slytherin++;
}

else if (answer4 == 3) {
  gryffindor++;
}

else if (answer4 == 4) {
  ravenclaw++;
}

else {
  cout << "Invalid input." << endl;
}

string house;
int max = 0;

if (gryffindor > max) {
  
  max = gryffindor;
  house = "Gryffindor";
  
}

if (hufflepuff > max) {

  max = hufflepuff;
  house = "Hufflepuff";
  
}

if (ravenclaw > max) {
  
  max = ravenclaw;
  house = "Ravenclaw";
  
}

if (slytherin > max) {
  
  max = slytherin;
  house = "Slytherin";
  
}

cout << house << "!\n";


  return 0;
}
