#include "calculator.h"

void SquareMeterCalculator::questionSquareMeter() {
    system("clear");
    cout << "\t\t\tSQUARE METER CALCULATOR" << endl;
    cout << "--------------------------------------------------------------------------------" << endl << endl;
    cout << "Please enter the length in meters: ";
    cin >> length;
    cout << "Please enter the width in meters: ";
    cin >> width;
    area = length * width;	
}	

void SquareMeterCalculator::calculationSquareMeter() {
    result = area;
}

void SquareMeterCalculator::answerSquareMeter() {
    cout << endl;
    cout << "The area in square meters is: " << result << " m² " << endl << endl;
    cout << "--------------------------------------------------------------------------------" << endl << endl;
}