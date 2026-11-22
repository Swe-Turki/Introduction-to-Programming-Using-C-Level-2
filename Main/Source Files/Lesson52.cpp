#include <fstream>
#include <iostream>
using namespace std;

// Write Mode: Write Data To File
int main() {

  fstream MyFile;

  MyFile.open("MyFile.txt",ios::out); // Write Mode

  if (MyFile.is_open()) {
    MyFile << "Hi, this is the first line\n";
    MyFile << "Hi, this is the second line\n";
    MyFile << "Hi, this is the third line\n";

    MyFile.close();
  }
  return 0;
}