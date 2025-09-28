/***************************************************************
Program......: MathTutorV2
 Programmers..:Austin Hill, kezey adjetey boye
 Date.........:
 GetHub Repo..:https://github.com/Austin-Hill2007/MathTutorV2.git
 Description..:
 **************************************************************/

#include <iostream>
#include <string>
#include<cstdlib>//necessary for rand()
#include<ctime>

using namespace std;

int main() {
    // variable declarations
    string userName = "unknown";
    int userAnswer = 0;
    int leftNum = 0;
    int rightNum = 0;
    int opNum = 0;
    int leftnum = 0;
    int rightnum = 0;
    int mathType = '?'; //[ 1,2,3,4]
    int correctAns = 0;
    int userAns = 0;
    int temp = 0;
    //(used to make sure the left number is larger than the right for subtraction)
    char mathSymbol = '?'; //[1 = +, 2 = -, 3 = *, 4 = /];

    cout << "What's your name? :";
    getline(cin, userName); // collect the user detials as one variable
    cout << "*  Welcome " << userName << " to the The Super Simple Math Tutor  *" << endl; //Greeting
    cout << endl;
    cout << "Sorry, but this version isnt set up fully yet. Please come back at V3" << endl;
    //cout << "What Equation would you like to solve." << endl; //Starting equation

    leftnum = rand() % 10 + 1;
    rightnum = rand() % 10 + 1;
    opNum = rand() % 4 + 1;



    switch (opNum) {
        case 1: // addition
            correctAns = leftNum + rightNum;
            cout << leftnum << " + " << rightnum << " = " << correctAns << endl;
            break;
        case 2: // subtraction
            correctAns = leftNum - rightNum;
            if (leftNum < rightNum)
                int tempNum = leftNum;
            leftNum = rightNum;
            rightNum = temp;
        break;
        case 3: // Multiply
            correctAns = leftNum * rightNum;
            if (leftNum < rightNum)
                leftNum = rightNum;
            rightNum = temp;
        break;
        case 4: // devision
            correctAns = leftNum / rightNum;
            int tempNum = leftnum;
            leftNum = rightNum;
            rightNum = temp;
        break;
    }
    switch (opNum) {
        default:
        int (-1);
    }

    //Need to use first and second number to calculate
    return 0;
}