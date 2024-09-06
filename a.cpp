#include <iostream>

int main() {
  
  double earthWeight;
  double planetNum; 
  double endWeight;
  
  std::cout << "What is your earth weight? Enter: ";

  std::cin >> earthWeight;

  std::cout << "Which planet do you want to fight on? 1-Mercury, 2-Venus, 3-Mars, 4-Jupiter, 5-Saturn, 6-Uranus, or 7-Neptune\n";

  std::cin >> planetNum;

  if (planetNum == 1) {
    endWeight = earthWeight * 0.38;
    std::cout << "Your weight on Mercury is " << endWeight << "\n";
  }
  else if (planetNum == 2) {
    endWeight = earthWeight * 0.91;
    std::cout << "Your weight on Venus is " << endWeight << "\n";
  }
    else if (planetNum == 3) {
    endWeight = earthWeight * 0.38;
    std::cout << "Your weight on Mars is " << endWeight << "\n";
  }
    else if (planetNum == 4) {
    endWeight = earthWeight * 2.34;
    std::cout << "Your weight on Jupiter is " << endWeight << "\n";
  }
    else if (planetNum == 5) {
    endWeight = earthWeight * 1.06;
    std::cout << "Your weight on Saturn is " << endWeight << "\n";
  }
    else if (planetNum == 6) {
    endWeight = earthWeight * 0.92;
    std::cout << "Your weight on Uranus is " << endWeight << "\n";
  }
    else if (planetNum == 7) {
    endWeight = earthWeight * 1.19;
    std::cout << "Your weight on Neptune is " << endWeight << "\n";
  }
  else {
    std::cout << "You didn't enter a valid entry";
  }
}

#Written by Anthony, guided by Codecademy.