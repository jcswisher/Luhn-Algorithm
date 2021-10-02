#include <iostream>

using namespace std;
int main() {

    // ask for credit card numbers until the user says exit
    infiniteLoop:while (true) {

        string userInput = "";
        string cardNumber = "";

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
                goto infiniteLoop;

            } else if (isdigit(userInput[i])) {
                cardNumber += userInput[i];
            }
        }

        if (cardNumber.length() < 16) {
            cout << "You entered too few digits, try that again." << endl;
        } else if (cardNumber.length() > 16) {
            cout << "You entered too many digits, try that again." << endl;
        } else {
            // create credit card object with user supplied number
        }
    }
}