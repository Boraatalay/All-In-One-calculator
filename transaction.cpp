#include "calculator.h"

int Transiction::QuestionTransiction() {
    system("clear");
    cout << "\t\t\t4 TRANSACTION CALCULATOR " << endl;
    cout << "--------------------------------------------------------------------------------" << endl << endl << endl;
    cout << "Please choose the operation you'd like to perform by selecting the corresponding number. (You can choose another number after making your initial selection.)" << endl << endl << endl;
    cout << "1- Add ( + )" << endl << endl;
    cout << "2- Subtract ( - )" << endl << endl;
    cout << "3- Multiply( * )" << endl << endl;
    cout << "4- Divide( / )" << endl << endl;
    cout << "--------------------------------------------------------------------------------" << endl << endl;
    cout << "Your Choice: ";
    cin >> choice;
    return choice;
}

void Transiction::CalculationTransaction() {
    if (choice == 1) {
        system("clear");
        cout << "\t\t\tADDITION " << endl;
        cout << "--------------------------------------------------------------------------------" << endl << endl;
        cout << "How many numbers do you want to add?" << endl;
        cin >> numbers;

        double temp1 = 0.0;
        for (int x = 0; x < numbers; x++) {
            double temp = 0.0;
            cout << "Please write the " << x + 1 << ". number: ";
            cin >> temp;
            totalcontinue += temp;
            temp1 += temp;
        }
        cout << endl << endl << endl;
        cout << "Your addition answer is: " << temp1 << endl << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
    }
    else if (choice == 2) {
        int slc;
        system("clear");
        cout << "\t\t\tSUBSTRACTION	 " << endl;
        cout << "--------------------------------------------------------------------------------" << endl << endl;
        cout << "Would you like to subtract from your previous answer or perform a completely new subtraction and add it to the previous answer?" << endl << endl;
        cout << "1- Substract one number from multiple numbers" << endl << endl;
        cout << "2-Substract two numbers" << endl << endl;
        cout << "Your Choice: ";
        cin >> slc;
        if (slc == 1) {
            system("clear");
            cout << "\t\t\tSUBSTRACTION	 " << endl;
            cout << "--------------------------------------------------------------------------------" << endl << endl;
            cout << "Please write the number to subtract from other numbers: ";
            double temp1;
            cin >> temp1;
            cout << endl;
            cout << "Please write how many numbers do you want to substract from the previous number: ";
            
            double temp2;
            double temp2total = 0.0;
            double temp3;
            cin >> temp2;
            
            for (int i = 0; i < temp2; i++) {
                cout << "Please enter the " << i + 1 << " number: ";
                cin >> temp3;	
                temp2total += temp3;
            }

            totalcontinue = temp1 - temp2total;
            cout << endl << endl;	
            cout << "Your substract answer is: " << totalcontinue << endl << endl;	
            
            cout << "--------------------------------------------------------------------------------" << endl;
        }
        if (slc == 2) {
            system("clear");
            cout << "\t\t\tSUBSTRACTION	 " << endl;
            cout << "--------------------------------------------------------------------------------" << endl << endl;

            cout << "Please enter the first number: ";
            double temp1;
            cin >> temp1;
            cout << "Please enter the second number: ";
            double temp2;
            cin >> temp2;
            totalcontinue = temp1 - temp2;
            cout << endl << endl;	
            cout << "Your substract answer is: " << totalcontinue << endl << endl;	
            
            cout << "--------------------------------------------------------------------------------" << endl;
        }
    }
    else if (choice == 3) {
        system("clear");
        cout << "\t\t\tMULTIPLICATION" << endl;
        cout << "--------------------------------------------------------------------------------" << endl << endl;
        cout << "How many numbers do you want to multiply?" << endl;
        cin >> numbers;
        double temp1 = 1.0;

        for (int x = 0; x < numbers; x++) {
            double temp;
            cout << "Please write the " << x + 1 << ". number: ";
            cin >> temp;
            temp1 *= temp;
        }
        cout << endl << endl << endl;
        cout << "Your mutiplication answer is: " << temp1 << endl << endl;
        cout << "--------------------------------------------------------------------------------" << endl;

        if (totalcontinue != 0.0) {
            totalcontinue = temp1 * totalcontinue;
        }
        else {
            totalcontinue = temp1;
        }
    }
    else if (choice == 4) {
        system("clear");
        cout << "\t\t\tDIVISION	 " << endl;
        cout << "--------------------------------------------------------------------------------" << endl << endl;
        cout << "Please enter the numerator: ";
        double temp1;
        cin >> temp1;
        cout << "Please enter the denominator: ";
        double temp2;
        cin >> temp2;
        while (temp2 == 0) {
            cout << "You cannot divide by 0. Please enter a new denominator: ";
            cin >> temp2;	
        }
            
        totalcontinue = temp1 / temp2;
        cout << endl << endl;	
        cout << "Your division answer is: " << totalcontinue << endl << endl;	
        cout << "--------------------------------------------------------------------------------" << endl;	
    }
}

void Transiction::answer() {
    totalfinish = totalcontinue;
    cout << "Your total answer is: " << totalfinish << endl;
}