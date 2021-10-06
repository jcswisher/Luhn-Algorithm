/**
 * @file main.cpp
 * Drive the program by validating input and creating a CreditCard object
 * @author Jeremiah Swisher
 * @date September 2021
 */

#include <iostream>
#include "CreditCard.h"

using namespace std;
int main() {

    // ask for credit card numbers until the user says exit
    while (true) {

        string userInput = "";
        string cardNumberIn = "";
        bool badInput = false;

        cout << "Enter a credit card number to check: ";
        getline(cin,userInput);

        // exit the program when the user wants to
        if (userInput == "exit") {
            return 0;
        }

        // check each character supplied and save the digits to a new string
        for (int i = 0; i < userInput.length(); i++) {
            if (!isdigit(userInput[i]) && userInput[i] != '-' && userInput[i] != ' ') {

                // the user entered something that's not a digit or a separator like '-' and ' '
                // tell them of their error and go back to the start of the infinite while loop
                cout << "You entered something that is not allowed. Try again." << endl;
                badInput = true;
                break;

            } else if (isdigit(userInput[i])) {
                cardNumberIn += userInput[i];
            }
        }

        if (!badInput) {
            if (cardNumberIn.length() < 16) {
                cout << "You entered too few digits, try that again." << endl;
                continue;
            } else if (cardNumberIn.length() > 16) {
                cout << "You entered too many digits, try that again." << endl;
                continue;
            }

            CreditCard card(cardNumberIn);

            if (card.isValid()) {
                cout << card.toString() << " is valid." << endl;
            } else {
                cout << card.toString() << " is invalid." << endl;
            }
        }
    }
}