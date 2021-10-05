/**
 * @file CreditCard.cpp
 * Implement methods to check validity of a credit card number
 * @author Jeremiah Swisher
 * @date September 2021
 */

#include <iostream>
#include "CreditCard.h"

using namespace std;

/**
 * Constructor which calls setter to
 * @param cardNumber the user supplied card number
 */
CreditCard::CreditCard(string cardNumber) {
    setCardNumberArr(cardNumber);
}

/**
 * Check whether the card number is a valid using the Luhn algorithm
 * @return true if the card number is valid
 */
bool CreditCard::isValid() {
    // luhn algorithm here
    return false;
}

/**
 * Converts the card number from array to string and formats with a dash every four characters
 * @return the card number
 */
string CreditCard::toString() {
    string toReturn = "";

    for (int i = 0; i < SIZE; i++) {
        if (i == 4) {
            toReturn += "-";
        }
        toReturn += to_string(cardNumberArr[i]);
    }

    return toReturn;
}

/**
 * converts user's card number to an array with one number in each index
 * @param cardNumber the full 16 digit card number supplied by the user stored as a string
 */
void CreditCard::setCardNumberArr(string cardNumber) {
    for (int i = 0; i < cardNumber.length(); i++) {
        cardNumberArr[i] = atoi(&cardNumber[i]);
    }
}