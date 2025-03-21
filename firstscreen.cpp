#include "calculator.h"

void FirstScreen::enterscreen() {
    string arr[6] = { "All", "In", "One", "Calclulator", "Replars", "Company" };
    system("clear");
    cout << "\t\t";
    
    cout << endl << endl << endl;
    for (int x = 0; x < 6; x++) {
        cout << arr[x] << " " << flush;
        usleep(400000);
    }
    
    for (int a = 0; a < 5; a++) {
        usleep(100000);
        cout << "\b\\" << flush;
        usleep(100000);
        cout << "\b|" << flush;
        usleep(100000);
        cout << "\b/" << flush;
        usleep(100000);
        cout << "\b-" << flush;
    }
    cout << "\b";
}