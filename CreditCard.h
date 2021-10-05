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
        static const int SIZE = 16;
        int cardNumberArr[SIZE];

    public:
        /**
         *
         * @param cardNumber
         */
        CreditCard(string cardNumber);

        /**
         *
         * @return
         */
        bool isValid();

        /**
         * converts user's card number to an array with one number in each index
         * @param cardNumber the full 16 digit card number supplied by the user stored as a string
         */
        void setCardNumberArr(string cardNumber);

        /**
         *
         * @return
         */
        string toString();
};

#endif //PROJECT01_CREDITCARD_H