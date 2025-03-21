#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <unistd.h>
#include <math.h>
#include <string>

using namespace std;

// Sınıf tanımlamaları
class FirstScreen {
public:
    void enterscreen();
};

class SelectionPage {
public:
    void selection();
};

class Transiction {
private:
    int choice;
    int numbers;
    double totalcontinue = 0.0;
    double totalfinish = 0.0;

public:
    int QuestionTransiction();
    void CalculationTransaction();
    void answer();
};

class AreaCalculator {
private:
    double area;
public:
    int choice;
    void questionArea();
    void calculationArea();
    void answerArea();
};

class PrimeFactorCalculator {
private:
    int number;
public:
    void questionPrimeFactor();
    void calculationPrimeFactor();
};

class CircumferenceCalculator {
private:
    int choice;
    double answer;
public:
    void questionCircumference();
    void calculationCircumference();
    void answerCircumference();
};

class FactorialCalculator {
private:
    int number;
    int answer = 1.0;
public:
    void questionFactorial();
    void calculationFactorial();
    void answerFactorial();
};

class InchCalculator {
private:
    int choice;
    double inch;
    double cm;
    double result;
public:
    void questionInch();
    void calculationInch();
    void answerInch();
};

class RadicalCalculator {
private:
    int choice;
    double root;
    double number;
    double result;
public:
    void questionRadical();
    void calculationRadical();
    void answerRadical();
};

class SquareMeterCalculator {
private:
    double area;
    double width;
    double length;
    double result;
public:
    void questionSquareMeter();
    void calculationSquareMeter();
    void answerSquareMeter();
};

#endif // CALCULATOR_H