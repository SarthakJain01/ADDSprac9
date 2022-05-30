
// C++ Program to convert prefix to Infix
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include "PrefixtoInfix.h"
#include "Operator.h"
using namespace std;


// Driver Code
int main() {
  int intcounter = 0;
  int opcounter = 0;
  stringstream ss;
  string str;
  getline(cin, str);
  replace( str.begin(), str.end(), ',', ' ');
  ss << str;
  string input;
  while (ss >> input)
  {
    if(input <= "9" && input >= "0")
    {
      intcounter++;
    }
    if(input == "+" || input == "-" || input == "*" || input == "/")
    {
      opcounter++;
    }
  }
  if(intcounter == opcounter+1){
  PrefixtoInfix Method;
  int resultval = Method.convertor(str);
  cout <<resultval<<endl;
  }
  else
  {
  cout<<"Error"<<endl;
  }
  return 0;

}