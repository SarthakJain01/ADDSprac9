#include "Operator.h"
#include <iostream>

bool Operator::operatorsvalues(char A) {
  switch (A) {
  case '+':
  case '-':
  case '/':
  case '*':
  case '^':
  case '%':
    return true;
  }
  return false;
}