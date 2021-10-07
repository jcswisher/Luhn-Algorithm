/**
 * @file CreditCard.h
 * Declares the data members and methods that will be used for storing and validating credit cards
 * @author Jeremiah Swisher
 * @date September 2021
 */

#ifndef PROJECT01_CREDITCARD_H
#define PROJECT01_CREDITCARD_H

using namespace std;
class CreditCard {

    private:
        static const int SIZE = 16;             // stores the constant size of the card number array
        int cardNumberArr[SIZE] = {};           // stores each digit of the user supplied card number into an index

    public:

        /**
         * constructs the CreditCard object with user supplied input
         * @param cardNumber the user supplied card number (already sanitized in main.cpp)
         */
        CreditCard(string cardNumber);

        /**
         * uses the luhn algorithm to check whether the card number is valid
         * @return true if valid, false otherwise
         */
        bool isValid();

        /**
         * sets each index of the card number array to one number of the user supplied card number
         * @param cardNumber the full 16 digit card number supplied by the user stored as a string
         * @param cardNumberArr the array which will store the card number
         */
        void setCardNumber(int cardNumberArr[], string cardNumber);

        /**
         * converts the card number array to a nicely formatted string
         * @return the card number as a nicely formatted string
         */
        string toString();
};

#endif //PROJECT01_CREDITCARD_H