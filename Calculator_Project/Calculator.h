#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
#include <string>

using namespace std;

class Calculator
{
    public:
        Calculator();
        void printCalc();
        string GetExp() { return _expression; }
        void Add();
        void Subtract();
        void Multiply();
        void Divide();
        void UpdateResult();
        void ShowResult();
        void ShowMenu();
        bool isExpressionEntered();


    protected:

    private:
        string _expression;
};

#endif // CALCULATOR_H

