#include "calculator.h"

void CircumferenceCalculator::questionCircumference() {
    system("clear");
    cout << "\t\t\tCIRCUMFERENCE CALCULATOR" << endl;
    cout << "--------------------------------------------------------------------------------" << endl << endl;

    cout << "Please select the shape you want to calculate the circumference of: " << endl << endl;
    cout << "1- Circle" << endl << endl;
    cout << "2- Equilateral triangle" << endl << endl;
    cout << "3- Isosceles triangle" << endl << endl;
    cout << "4- Scalene triangle" << endl << endl;
    cout << "5- Rectangle" << endl << endl;
    cout << "6- Square" << endl << endl;
    cout << "7- Equilateral quadrangle" << endl << endl;
    cout << "8- Parallelogram" << endl << endl;
    cout << "9- Trapezoid" << endl << endl;
    cout << "10- Scalene trapezoid" << endl << endl;
    cout << "11- Equilateral pentagon" << endl << endl;
    cout << "12- Equilateral hexagon" << endl << endl;
    cout << "13- Equilateral octagon" << endl << endl;
    cout << "14- Ellipse" << endl << endl;
    cout << "Enter your choice: ";
    cin >> choice;	
}

void CircumferenceCalculator::calculationCircumference() {	
    double radius;
    double side;
    double height;
    double base;
    double radius2;
    double sidea;
    double sideb;
    double sidec;
    double sided;

    switch (choice) {
        case 1:
            system("clear");
            cout << "\t\t\tCIRCLE" << endl;
            cout << "--------------------------------------------------------------------------------" << endl << endl;
            cout << "Please write the radius of the circle in cm: ";
            cin >> radius;
            answer = 2 * 3.14159265359 * radius;	
            break;

        case 2:	
            system("clear");
            cout << "\t\t\tEQUILATERAL TRIANGLE	" << endl;
            cout << "--------------------------------------------------------------------------------" << endl << endl;
            cout << "    /\\" << endl;
            cout << "   /  \\" << endl;
            cout << "a /    \\ a" << endl;
            cout << " /      \\" << endl;
            cout << "/________\\" << endl;
            cout << "    a      " << endl << endl;
            cout << "Please write the side length(a) of the triangle in cm: ";
            cin >> side;	
            answer = 3 * side;
            break;	

        case 3:
            system("clear");
            cout << "\t\t\tISOSCELES TRIANGLE	" << endl;
            cout << "--------------------------------------------------------------------------------" << endl << endl;
            cout << "    /\\" << endl;
            cout << "   /  \\" << endl;
            cout << "a /    \\ a" << endl;
            cout << " /      \\" << endl;
            cout << "/________\\" << endl;
            cout << "    b      " << endl << endl;
            cout << "Please write the isosceles side(a) length of the triangle in cm: ";	
            cin >> sidea;	
            cout << "Please write the base side(b) length of the triangle in cm: ";
            cin >> sideb;	
            answer = (sidea * 2) + sideb;	
            break;	

        case 4:
            system("clear");
            cout << "\t\t\tSCALENE TRIANGLE	" << endl;
            cout << "--------------------------------------------------------------------------------" << endl << endl;
            cout << "    /\\" << endl;
            cout << "   /  \\" << endl;
            cout << "a /    \\  c" << endl;
            cout << " /      \\" << endl;
            cout << "/________\\" << endl;
            cout << "    b      " << endl << endl;
            cout << "Please write the side(a) length of the triangle in cm: ";
            cin >> sidea;	
            cout << "Please write the side(b) length of the triangle in cm: ";
            cin >> sideb;	
            cout << "Please write the side(c) length of the triangle in cm: ";
            cin >> sidec;	
            answer = sidea + sideb + sidec;	
            break;	

        case 5:
            system("clear");
            cout << "\t\t\tRECTANGLE" << endl;
            cout << "--------------------------------------------------------------------------------" << endl << endl;
            cout << "|-----------------|" << endl;
            cout << "|                 |" << endl;
            cout << "|                 |" << endl;
            cout << "|                 |  a" << endl;
            cout << "|                 |" << endl;
            cout << "|-----------------|" << endl;
            cout << "         b         " << endl << endl;
            cout << "Please write the base length(b) of the rectangle in cm: ";
            cin >> base;	
            cout << "Please write the height(a) of the rectangle in cm: ";
            cin >> height;	
            answer = (base * 2) + (height * 2);		
            break;	

        case 6:
            system("clear");
            cout << "\t\t\tSQUARE	" << endl;
            cout << "--------------------------------------------------------------------------------" << endl << endl;
            cout << "|---------------|" << endl;
            cout << "|               |" << endl;
            cout << "|               |" << endl;
            cout << "|               | a" << endl;
            cout << "|               |" << endl;
            cout << "|---------------|" << endl;
            cout << "       a         " << endl << endl;
            cout << "Please write the side length of the square in cm: ";
            cin >> side;
            answer = side * 4;	
            break;	

        case 7:
            system("clear");
            cout << "\t\t\tEQUILATERAL QUADRANGLE" << endl;
            cout << "--------------------------------------------------------------------------------" << endl << endl;
            cout << "Please write the side length of the quadrangle in cm: ";
            cin >> side;
            answer = side * 4;	
            break;	

        case 8:
            system("clear");
            cout << "\t\t\tPARALLELOGRAM	" << endl;
            cout << "--------------------------------------------------------------------------------" << endl << endl;
            cout << "    _________________" << endl;
            cout << "   /                /" << endl;
            cout << "  /                /" << endl;
            cout << " /                / a" << endl;
            cout << "/________________/" << endl;
            cout << "        b          " << endl << endl;	
            cout << "Please write the base(b) length of the parallelogram in cm: ";
            cin >> base;
            cout << "Please write the side(a) length of the parallelogram in cm: ";
            cin >> side;
            answer = (base * 2) + (side * 2);	
            break;	

        case 9:
            system("clear");
            cout << "\t\t\tTRAPEZOID" << endl;
            cout << "--------------------------------------------------------------------------------" << endl << endl;
            cout << "        b    " << endl;
            cout << "    _________" << endl;
            cout << "   /         \\" << endl;
            cout << "c /           \\ c" << endl;
            cout << " /             \\" << endl;
            cout << "/_______________\\" << endl;
            cout << "        a          " << endl << endl;	
            cout << "Please write the upper(b) length of the trapezoid in cm: ";
            cin >> base;
            cout << "Please write the isosceles(c) length of the trapezoid in cm: ";
            cin >> side;
            cout << "Please write the base(a) length of the trapezoid in cm: ";
            cin >> sidea;
            answer = (base) + (side * 2) + (sidea);	
            break;	

        case 10:
            system("clear");
            cout << "\t\t\tSCALENE TRAPEZOID" << endl;
            cout << "--------------------------------------------------------------------------------" << endl << endl;
            cout << "Please write the one side(a) length of the trapezoid in cm: ";
            cin >> sidea;
            cout << "Please write the other side(b) length of the trapezoid in cm: ";
            cin >> sideb;
            cout << "Please write the other side(c) length of the trapezoid in cm: ";
            cin >> sidec;
            cout << "Please write the other side(d) length of the trapezoid in cm: ";
            cin >> sided;
            answer = (sidea) + (sideb) + (sidec) + (sided);	
            break;	

        case 11:
            system("clear");
            cout << "\t\t\tEQUILATERAL PENTAGON	" << endl;
            cout << "--------------------------------------------------------------------------------" << endl << endl;
            cout << "Please write the side of the pentagon in cm: ";	
            cin >> side;
            answer = side * 5;
            break;	

        case 12:
            system("clear");
            cout << "\t\t\tEQUILATERAL HEXAGON	" << endl;
            cout << "--------------------------------------------------------------------------------" << endl << endl;
            cout << "Please write the side of the pentagon in cm: ";	
            cin >> side;
            answer = side * 6;
            break;	

        case 13:
            system("clear");
            cout << "\t\t\tEQUILATERAL OCTAGON	" << endl;
            cout << "--------------------------------------------------------------------------------" << endl << endl;
            cout << "Please write the side of the pentagon in cm: ";	
            cin >> side;
            answer = side * 8; // Değer 7 yerine 8 olarak düzeltildi (oktagon 8 kenarlıdır)
            break;	

        case 14:
            system("clear");
            cout << "\t\t\tELLIPSE" << endl;
            cout << "--------------------------------------------------------------------------------" << endl << endl;
            cout << "Please write the short radius of the ellipse in cm: ";
            cin >> radius;
            cout << "Please write the long radius of the ellipse in cm: ";
            cin >> radius2;
            answer = (2 * 3.14) * sqrt((1.0 / 2.0) * ((radius * radius) + (radius2 * radius2)));
            break;	
    }
}	

void CircumferenceCalculator::answerCircumference() {	
    cout << "--------------------------------------------------------------------------------" << endl << endl;
    cout << "Your circumference is: " << answer << " cm" << endl << endl;
    cout << "--------------------------------------------------------------------------------" << endl << endl;	
}