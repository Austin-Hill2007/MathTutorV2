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
 getline(cin,userName); // collect the user details as one variable
 cout << "*  Welcome " << userName << " to the The Super Simple Math Tutor  *" << endl; //Greeting
 cout << endl;
 cout << "Sorry, but this version isn't set up fully yet. Please come back at V2" << endl;
 cout<< "What Equation would you like to solve."<< end; //Starting equation

  int leftNum = 0;
  int rightNum = 0 <<end;
 cin >> leftNum;
 cin >>rightNum;

 int leftnum=rand() % 10+ 1;
 int rightNum=rand() % 10+ 1;
 int opNum=rand() % 4 + 1;
 int correctAns;
 int userAns;
 int temp; //(used to make sure the left number is larger than the right for subtraction)\

 switch (opNum) {
  case 1:// ADDITION
   correctAns= leftNum + rightNum;
  cout<<leftnum<<" + "<<rightNum<<" = "<<correctAns<<endl;
  break;
  case 2: // subtraction
   correctAns= rightNum;
  if(leftNum< rightNum)
   int tempNum = leftNum;
  leftNum = rightNum;
  rightNum = temp;
 }




 //Need to use first and second number to calculate
 return 0;
}
