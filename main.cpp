/***************************************************************
Program......: MathTutorV1
 Programmers..:Cody Hittle, kezey adjetey boye
 Date.........:
 GetHub Repo..:https://github.com/cohitt01/MathTutorV1
 Description..:
 **************************************************************/

#include <iostream>

using namespace std;

int main() {
    string userName = "unknown";
     int userAnswer = 0;
    cout << "What's your name? :";
    cin >> userName;   // reads input until the first space

    cout << "*  Welcome " << userName << " to the The Super Simple Math Tutor  *" << endl; //Greeting
     cout << endl;
    cout << "Sorry, but this version isnt set up fully yet. Please come back at V2" << endl;
     //cout << "What Equation would you like to solve." << endl; //Starting equation
      int firstNumber = 0;
      int secondNumber = 0;
  cin >> firstNumber;
  cin >> secondNumber;
    //Need to use first and second number to calculate
    return 0;
}
