#include "Calculator.h"
#include <iostream>
#include <string>
using namespace std;

Calculator::Calculator()
{
 //Random Fucking Statements
}

bool Calculator :: isExpressionEntered()  {           //Function to check if the expression is a NULL or not
if(GetExp()!= "\0")
    return true;
else
    return false;
}
