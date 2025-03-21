#include "calculator.h"

int main() {
    FirstScreen call;
    SelectionPage callx;
   
    call.enterscreen();
    while (1) {
        system("clear"); 
        callx.selection();
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        char continueto;  

        Transiction call1;
        AreaCalculator call2;
        PrimeFactorCalculator call3;
        CircumferenceCalculator call4;
        FactorialCalculator call5;
        InchCalculator call6;
        RadicalCalculator call7;	
        SquareMeterCalculator call8;	
        
        switch (choice) {    
            case 1:
                do {
                    call1.QuestionTransiction();
                    call1.CalculationTransaction();
                    cout << "Do you want to continue? (y/n): ";
                    cin >> continueto;  
                } while (continueto == 'y' || continueto == 'Y'); 
                call1.answer(); 
                break;
            
            case 2:
                do {
                    call2.questionArea();
                    call2.calculationArea();
                    call2.answerArea(); 
                    cout << "Do you want to continue? (y/n): ";
                    cin >> continueto;	
                } while(continueto == 'y' || continueto == 'Y'); 
                break;

            case 3:
                do {
                    call3.questionPrimeFactor();
                    call3.calculationPrimeFactor();
                    
                    cout << "Do you want to continue? (y/n): ";
                    cin >> continueto;	
                } while(continueto == 'y' || continueto == 'Y'); 
                break;	
            
            case 4:
                do {
                    call4.questionCircumference();
                    call4.calculationCircumference();
                    call4.answerCircumference();	
                    
                    cout << "Do you want to continue? (y/n): ";
                    cin >> continueto;	
                } while(continueto == 'y' || continueto == 'Y'); 
                break;	

            case 5:
                do {
                    call5.questionFactorial();
                    call5.calculationFactorial();
                    call5.answerFactorial();	
                    
                    cout << "Do you want to continue? (y/n): ";
                    cin >> continueto;	
                } while(continueto == 'y' || continueto == 'Y'); 
                break;	

            case 6:
                do {
                    call6.questionInch();
                    call6.calculationInch();
                    call6.answerInch();	
                    
                    cout << "Do you want to continue? (y/n): ";
                    cin >> continueto;	
                } while(continueto == 'y' || continueto == 'Y'); 
                break;	

            case 7:
                do {
                    call7.questionRadical();
                    call7.calculationRadical();
                    call7.answerRadical();	
                    
                    cout << "Do you want to continue? (y/n): ";
                    cin >> continueto;	
                } while(continueto == 'y' || continueto == 'Y'); 
                break;	

            case 8:
                do {
                    call8.questionSquareMeter();
                    call8.calculationSquareMeter();
                    call8.answerSquareMeter();	
                    
                    cout << "Do you want to continue? (y/n): ";
                    cin >> continueto;	
                } while(continueto == 'y' || continueto == 'Y'); 
                break;	
        } 
    }

    return 0;   
}