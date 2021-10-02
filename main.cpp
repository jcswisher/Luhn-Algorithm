#include <iostream>

using namespace std;
int main() {

    // ask for credit card numbers until the user says exit
    while (true) {

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
            if (isdigit(userInput[i])) {
                cardNumber += userInput[i];
            }
        }



        cout << cardNumber << endl;
    }
}