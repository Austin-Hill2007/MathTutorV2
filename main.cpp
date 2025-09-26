/***************************************************************
Program......: MathTutorV2
 Programmers..:Austin Hill, kezey adjetey boye
 Date.........:
 GetHub Repo..:https://github.com/Austin-Hill2007/MathTutorV2.git
 Description..:
 **************************************************************/

#include <iostream>

using namespace std;

int main() {
 string userName = "unknown";
 int userAnswer = 0;
 cout << "What's your name? :";
 getline(cin,userName); // collect the user detials as one variable
 cout << "*  Welcome " << userName << " to the The Super Simple Math Tutor  *" << endl; //Greeting
 cout << endl;
 cout << "Sorry, but this version isnt set up fully yet. Please come back at V2" << endl;
 //cout << "What Equation would you like to solve." << endl; //Starting equation
 int leftNum = 0;
 int rightNum = 0;
 cin >> leftNum;
 cin >>rightNum;

 int leftnum=rand() % 10+ 1;
 int rightnum =rand() % 10+ 1;
 int opNum=rand() % 4 + 1;
 int correctAns;
 int userAns;
 int temp; //(used to make sure the left number is larger than the right for subtraction)\
random numbers ( generate a random number from 1-4)
 [1 = addition, 2 = subtraction, 3 = multiply, 4 = division]

 switch (opNum) {
  case 1:// addition
   correctAns= leftNum + rightNum;
  cout<<leftnum<<" + "<<rightnum<<" = "<<correctAns<<endl;
   break;
  case 2: // subtraction
   correctAns= leftNum - rightNum;
  if(leftNum< rightNum)
   int tempNum = leftNum;
  leftNum = rightNum;
  rightNum = temp;
  case 3:// Multiply
  correctAns= leftNum * rightNum;
  if (leftNum< rightNum)
   leftNum = rightNum;
  rightNum = temp;
  case 4: // devision
  correctAns= leftNum / rightNum;
  int tempNum = leftnum;
   leftNum = rightNum;
   rightNum = temp;
 }



 //Need to use first and second number to calculate
 return 0;
}
