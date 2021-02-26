#include <iostream>
#include <math.h>

#define _USE_MATH_DEFINES

int main() {
  float diameter, circumference, area;
  std::cout << "Program for calculating the area and circumference of a circle based on the input of the circle's diameter!\n";
  std::cout << "Please input the diameter:\n";
  std::cin >> diameter;
  circumference = M_PI * diameter;
  area = M_PI * pow (diameter, 2);
  std::cout << "The circumference is "<< circumference << "\n";
  std::cout << "The area is "<< area << "\n";
  std::cout << "Thank you for using this code!!!\n";  
}
