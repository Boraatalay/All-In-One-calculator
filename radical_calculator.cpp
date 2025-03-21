#include "calculator.h"

void RadicalCalculator::questionRadical() {
    system("clear");
    cout << "\t\t\tRADICAL NUMBER CALCULATOR" << endl;
    cout << "--------------------------------------------------------------------------------" << endl << endl;
    cout << "Please enter the degree of root: ";	
    cin >> root;
    if (root <= 0) {
        system("clear");
        cout << "\t\t\tWARNING" << endl;
        cout << "--------------------------------------------------------------------------------" << endl << endl;
        
        do {
            cout << "Please enter a positive number: " << flush;
            sleep(2);
            cin >> root;	
        } while (root <= 0);	
        
        cout << endl << endl;
    }	
    cout << endl << endl;	
    cout << "Please enter the number inside the root: ";	
    cin >> number;	
    if (number < 0) {
        system("clear");
        cout << "\t\t\tWARNING" << endl;
        cout << "--------------------------------------------------------------------------------" << endl << endl;
        cout << "Please enter a positive number" << endl << endl;
        sleep(2);
        questionRadical();	
    }	
}

void RadicalCalculator::calculationRadical() {
    result = pow(number, 1 / root);
}

void RadicalCalculator::answerRadical() {
    cout << endl;	
    cout << "The root is: " << result << endl << endl;
    cout << "--------------------------------------------------------------------------------" << endl << endl;	
}