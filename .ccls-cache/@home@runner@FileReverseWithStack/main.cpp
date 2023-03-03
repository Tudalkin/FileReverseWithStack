#include "DynamicStack.cpp"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {

  // variables

  DynamicStack<char> myStack;
  ifstream inFile;
  ofstream outFile;
  string command;
  char data;

  // input file;
  cout << "Enter Input File: ";
  cin >> command;
  inFile.open(command.c_str());
  // output file
  cout << "Enter Output File: ";
  cin >> command;
  outFile.open(command.c_str());

  // pushes data into stack from infile
  while (inFile >> data)
    myStack.push(data);
  // pops data from stack pushes into outfile
  while (!myStack.isEmpty())
    outFile << myStack.pop() << endl;
}