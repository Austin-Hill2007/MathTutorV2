/***************************************************************
Program......: MathTutorV2
 Programmers..:Austin Hill, kezey adjetey boye
 Date.........:
 GetHub Repo..:https://github.com/Austin-Hill2007/MathTutorV2.git
 Description..:
 **************************************************************/

#include <iostream>
#include <string>
#include <cstdlib> //necessary for rand()
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
    int temp = 0;
    //(used to make sure the left number is larger than the right for subtraction)
    char mathSymbol = '?'; //[1 = +, 2 = -, 3 = *, 4 = /];

    cout << "========================================================"<< endl;
    cout << "The Silly Simple Math Tutor" << endl;
    cout << "========================================================"<< endl;
    cout << endl;
    cout << "Welcome to the Silly Simple Math Tutor!" << endl;
    cout << endl;
    cout <<"Fun math Facts:" << endl;
    cout << "   * Math Teachers have problems." <<endl;
    cout << "   * Math is the only subject that counts."<<endl;
    cout << "   * If it seems easy, you're doing it wrong."<<endl;
    cout << "   * It's all fun and games until someone divides by zero." <<endl;
    cout << endl;
    cout << "========================================================"<< endl;
    cout <<endl;
    cout << "What is your name? ";
    cin >> userName;
    cout << "Welcome "<<userName << " to the Silly Simple Math Tutor." <<endl;

    cout <<endl;

    srand(time(NULL));

    leftNum = rand() % 10 + 1;
    rightNum = rand() % 10 + 1;
    opNum = rand() % 4 + 1;




    switch (opNum)
    {
    case 1: // addition
        correctAns = leftNum + rightNum;
        mathSymbol = '+';
        break;
    case 2: // subtraction
        correctAns = leftNum - rightNum;
        mathSymbol = '-';
        if (leftNum < rightNum)
        {
            int tempNum = leftNum;
            leftNum = rightNum;
            rightNum = temp;
        }
        break;
    case 3: // Multiply
        correctAns = leftNum * rightNum;
        mathSymbol = '*';
        break;
    case 4: // devision
        correctAns = leftNum;
        leftNum *= rightNum;
        mathSymbol ='/';
        break;

    default:
        cout << "Your math type is " << opNum << endl;
        cout << "Please contact us for help" << endl;
        return -1;

    }

    cout <<userName << " what is " << leftNum << mathSymbol << rightNum  << " = ";
    cin >> userAnswer;
    if (userAnswer == correctAns)
    {
        cout << "Congrats! It looks like you are a math wizard." << endl;
        cout << "Thank you for playing the game" << endl;
    }
    else
    {
        cout << "Looks like you should play this game again."<< endl;
        cout << "The correct answer was " << correctAns <<"." <<endl;
    }
    cout << endl;
    cout << "Keep calm and do math!" <<endl;
    return -1;
}