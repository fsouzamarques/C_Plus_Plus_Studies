/*Whale Talk
Takes a phrase like "turpentine and turtles" and translate it into its “whale talk” equivalent, "uueeieeauuee".

There are a few simple rules for translating text to whale language:

There are no consonants. Only vowels excluding the letter y.
The u‘s and e‘s are extra long, so we must double them.
Once we have converted text to the whale language, the result is sung slowly, as is custom in the ocean.

Write a whale.cpp program that accomplishes this translation using loops and vectors.*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

string phrase = "turpentine and turtles";

vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};

vector<char> result;

for (int i = 0; i < phrase.size(); i++) {

if (phrase[i] == 'u' || phrase[i] == 'e') {

result.push_back(phrase[i]);
        
}

for (int j = 0; j < vowels.size(); j++) {

if (phrase[i] == vowels[j]) {

result.push_back(phrase[i]);
}

}

}

for (int m = 0; m <result.size(); m++) {

cout << result[m];

}

cout << " " << endl;

  return 0;
}
