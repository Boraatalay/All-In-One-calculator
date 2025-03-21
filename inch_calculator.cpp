#include "calculator.h"

void InchCalculator::questionInch() {
    system("clear");
    cout << "\t\t\tINCH CALCULATOR" << endl;
    cout << "--------------------------------------------------------------------------------" << endl << endl;
    cout << " 1-Inch to Cm" << endl << endl;
    cout << " 2-Cm to Inch" << endl << endl;

    cout << "Enter your choice: ";
    cin >> choice;	
    
    if (choice == 1) {
        cout << endl << endl;
        cout << "Please write the length in inch: ";	
        cin >> inch;
    }
    else if (choice == 2) {	
        cout << endl << endl;
        cout << "Please write the length in cm: ";	
        cin >> cm;	
    }
    else {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
        sleep(2);
        questionInch(); // Yeniden sorma
    }
}

void InchCalculator::calculationInch() {
    if (choice == 1) {
        result = inch * 2.54; // 1 inch = 2.54 cm
    }
    else if (choice == 2) {
        result = cm / 2.54; // 1 cm = 0.3937 inch
    }
}

void InchCalculator::answerInch() {
    cout << endl;

    if (choice == 1) {
        cout << inch << " inch = " << result << " cm" << endl << endl;
    }
    else if (choice == 2) {	
        cout << cm << " cm = " << result << " inch" << endl << endl;
    }
    
    cout << "--------------------------------------------------------------------------------" << endl << endl;	
}





