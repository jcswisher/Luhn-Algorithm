/**
 * @file CreditCard.cpp
 * Implement methods to check validity of a credit card number
 * @author Jeremiah Swisher
 * @date September 2021
 */

#include <iostream>
#include "CreditCard.h"

using namespace std;

// constructs the CreditCard object with user supplied input
CreditCard::CreditCard(string cardNumber) {
    // pass the empty array along with the user supplied card number to the setter
    setCardNumber(cardNumberArr, cardNumber);
}

// uses the luhn algorithm to check whether the card number is valid
bool CreditCard::isValid() {
    int sum = 0;
    int checkNum[SIZE] = {};

    for (int i = 0; i < SIZE; i++) {
        checkNum[i] = cardNumberArr[i];
    }

    // loop through the card number backwards and step by 2 every time
    for (int i = SIZE; i > -1; i-=2) {
        // multiply every other number by 2
        cardNumberArr[i] = cardNumberArr[i] * 2;
    }

    for (int i = 0; i < SIZE; i++) {
        sum += cardNumberArr[i];
    }

    if (sum % 10 == 0) {
        return true;
    } else {
        return false;
    }
}

// sets each index of the card number array to one number of the user supplied card number
void CreditCard::setCardNumber(int cardNumberArr[], string cardNumber) {
    // loop through the user supplied card number and put one number from it into the array
    for (int i = 0; i < cardNumber.length(); i++) {
        // - '0' will prevent from using the ASCII value of the number instead of the actual number
        cardNumberArr[i] = cardNumber[i] - '0';
    }
}

// converts the card number array to a nicely formatted string with a dash after every four numbers
string CreditCard::toString() {
    string toReturn = "";

    // loop through the card number array
    for (int i = 0; i < SIZE; i++) {
        // depending on the index, either put one number from the array into toReturn or a dash and then one number
        if (i == 4 || i == 8 || i == 12) {
            toReturn += "-";
        }
        toReturn += to_string(cardNumberArr[i]);
    }

    return toReturn;
}