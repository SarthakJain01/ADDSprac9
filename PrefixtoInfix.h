#ifndef PrefixtoInfix_H
#define PrefixtoInfix_H
#include <iostream>
#include "Operator.h"

class PrefixtoInfix:public Operator{
public:
  int convertor(std::string valueinput);
};

#endif