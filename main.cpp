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

        string userInput = "";   // stores the raw user input
        string cardNumberIn = "";// stores user input which has been sanitized to only have digits
        bool badInput = false;   // stores true if the users input contains anything other than digits dashes and spaces

        // prompt for a credit card number
        cout << "Enter a credit card number to check: ";
        getline(cin,userInput);

        // exit the program when the user wants to
        if (userInput == "exit") {
            return 0;
        }

        // check each character supplied and save the digits to a new string
        for (int i = 0; i < userInput.length(); i++) {
            // if the user enters something that's not a digit or a separator like '-' and ' '
            if (!isdigit(userInput[i]) && userInput[i] != '-' && userInput[i] != ' ') {

                // tell them of their error and set a variable to remember that they gave bad input
                cout << "You entered something that is not allowed. Try again." << endl;
                badInput = true;
                break;

            } else if (isdigit(userInput[i])) {
                cardNumberIn += userInput[i];
            }
        }

        // if the user entered something other than digits, dashes, and spaces
        if (!badInput) {
            // check that the user supplied a proper length credit card number
            if (cardNumberIn.length() < 16) {
                cout << "You entered too few digits, try that again." << endl;
                continue;
            } else if (cardNumberIn.length() > 16) {
                cout << "You entered too many digits, try that again." << endl;
                continue;
            }

            // create a CreditCard object with the user supplied number
            CreditCard card(cardNumberIn);

            // check if the card number is valid
            if (card.isValid()) {
                cout << card.toString() << " is valid." << endl;
            } else {
                cout << card.toString() << " is invalid." << endl;
            }
        }
    }
}