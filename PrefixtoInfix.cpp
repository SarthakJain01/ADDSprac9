#include "PrefixtoInfix.h"
#include "Operator.h"
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int PrefixtoInfix::convertor(string valueinput) {
  stack<string> sample;
  stack<int> result;
  int evaluate;
  // counter of expression
  int counter = valueinput.size();

  // reading from right to left
  for (int i = counter - 1; i >= 0; i--) {

    // check if symbol is operator
    if (operatorsvalues(valueinput[i])) {

      // pop two operands from stack
      string val1 = sample.top();
      sample.pop();
      string val2 = sample.top();
      sample.pop();
      if(valueinput[i] == '+' || valueinput[i] == '-')
      {
      string temporary = "(" + val1 + valueinput[i] + val2 + ")";
      sample.push(temporary);
      }
      else
      {
      string temporary = val1 + valueinput[i] + val2 ;
      sample.push(temporary);
      }

      // Push string temp back to stack
      int val3 = result.top();
      result.pop();
      int val4 = result.top();
      result.pop();
      if (valueinput[i] == '+'){
      evaluate = val3 + val4;
      }
      else if(valueinput[i] == '-'){
      evaluate = val3 - val4;
      }
      else if(valueinput[i] == '*'){
      evaluate = val3 * val4;
      }
      else if(valueinput[i] == '/'){
      evaluate = val3 / val4;
      }
      result.push(evaluate);
    }

    // if symbol is an operand
    else if(valueinput[i]<='9' && valueinput[i]>='0'){

      // push the operand to the stack
      sample.push(string(1, valueinput[i]));
      result.push(stoi(string(1, valueinput[i])));
    //cout<<result.top();
    }

    else
    {

    }
  }
  // Stack now contains the Infix expression
  cout<<sample.top() <<" = ";
  return result.top();
}