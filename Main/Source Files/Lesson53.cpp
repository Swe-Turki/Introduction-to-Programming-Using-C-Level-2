#include <fstream>
#include <iostream>
using namespace std;

// Append Mode: Append Data to File
int main() {
  fstream MyFile;

  MyFile.open("MyFile.txt", ios::app); // append Mode
  if (MyFile.is_open()) {
    MyFile << "Hi, this is a new line\n";
    MyFile << "Hi, this is another new line\n";
    MyFile.close();
  }
  return 0;
}