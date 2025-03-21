#include "calculator.h"

void FactorialCalculator::questionFactorial() {
    system("clear");
    cout << "\t\t\tFACTORIAL CALCULATOR" << endl;
    cout << "--------------------------------------------------------------------------------" << endl << endl;
    cout << "Please write the number you want to calculate the factorial of: ";
    cin >> number;
    if (number >= 17 || number < 0) {
        system("clear");
        cout << "\t\t\tWARNING" << endl;
        cout << "--------------------------------------------------------------------------------" << endl << endl;
        cout << "Please enter a number between 0 and 17" << endl << endl;
        sleep(2);
        questionFactorial();
    }
}

void FactorialCalculator::calculationFactorial() {
    answer = 1;
    for (int i = 1; i <= number; i++) {
        answer = answer * i;
    }
}

void FactorialCalculator::answerFactorial() {
    cout << "--------------------------------------------------------------------------------" << endl << endl;
    cout << "Your factorial is: " << answer << endl << endl;
    cout << "--------------------------------------------------------------------------------" << endl << endl;
}