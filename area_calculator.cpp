#include "calculator.h"

void AreaCalculator::questionArea() {
    system("clear");
    cout << "\t\t\tAREA CALCULATOR" << endl;
    cout << "--------------------------------------------------------------------------------" << endl << endl;
    cout << "What shape do you want to calculate the area of?" << endl << endl << endl;
    cout << "1- Rectangle or Square" << endl << endl;
    cout << "2- Triangle" << endl << endl;	
    cout << "3- Circle" << endl << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Enter your choice: ";	
    cin >> choice;	
}

void AreaCalculator::calculationArea() {
    if (choice == 1) {    
        double base;
        double height;
            
        system("clear");
        cout << "\t\t\tRECTANGLE or SQUARE AREA CALCULATOR" << endl;
        cout << "--------------------------------------------------------------------------------" << endl << endl;
        cout << "Please enter the base length in cm: ";
        cin >> base;
        cout << "Please enter the height in cm: ";
        cin >> height;
        area = base * height;
    }
    else if (choice == 2) {
        double base;
        double height;
            
        system("clear");
        cout << "\t\t\tTRIANGLE AREA CALCULATOR" << endl;
        cout << "--------------------------------------------------------------------------------" << endl << endl;
        cout << "Please enter the base length in cm: ";
        cin >> base;
        cout << "Please enter the height in cm: ";
        cin >> height;
        area = (base * height) / 2;
    }
    else if (choice == 3) {
        double pi = 3.14159265358979323846;
        double r;
        
        system("clear");
        cout << "\t\t\tCIRCLE AREA CALCULATOR" << endl;
        cout << "--------------------------------------------------------------------------------" << endl << endl;
        cout << "Please enter the radius of the circle in cm: ";
        cin >> r;
        area = pi * r * r;
    }	
}

void AreaCalculator::answerArea() {
    double answer = area;	
    cout << endl;
    cout << "The area is: " << answer << " cm²" << endl << endl;	
    cout << "--------------------------------------------------------------------------------" << endl << endl;
}