#include "calculator.h"

void PrimeFactorCalculator::questionPrimeFactor() {
    system("clear");
    cout << "\t\t\tPRIME FACTOR CALCULATOR" << endl;
    cout << "--------------------------------------------------------------------------------" << endl << endl;
    cout << "Enter a number to calculate its prime factors : ";
    cin >> number;
    cout << endl << endl;
}

void PrimeFactorCalculator::calculationPrimeFactor() {
    cout << "Prime factors of " << number << " are: ";	

    if (number == 0) {
        cout << "0 has no prime factorization" << endl;
    }
    else {
        while (number % 2 == 0) {
            cout << "2 x ";
            number = number / 2;	
        }

        for (int i = 3; i <= number; i = i + 2) {
            while (number % i == 0) {
                cout << i << " x ";	
                number = number / i;
            }
        }	
        cout << "\b\b " << endl << endl;	
        cout << "--------------------------------------------------------------------------------" << endl << endl;
    }
}