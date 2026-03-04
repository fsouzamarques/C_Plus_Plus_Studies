/*
//The mad scientist Kelvin has mastered predicting the weather in his mountain-side meteorology lab.
//Recently, Kelvin began publishing his weather forecasts on his website, however, there’s a problem: All of his forecasts describe the temperature in Fahrenheit degrees.
//Let’s convert a temperature from Fahrenheit (F) to Celsius (C).
//The formula is the following:
//C=(F−32)/1.8
*\

#include <iostream>

int main() {
  
  double tempf = 63.5;
  double tempc;
  
  tempc = (tempf - 32)/1.8;

  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}
