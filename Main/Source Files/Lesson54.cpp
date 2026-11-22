#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void PrintFileContenet(string FileName) {
  fstream MyFile;
  MyFile.open(FileName, ios::in); // read Mode
  if (MyFile.is_open()) {
    string Line;
    
    while (getline(MyFile, Line)) {
      cout << Line << endl;
    }
    MyFile.close();
  }

  // Read Mode: Print File Content
}
int main() {
  PrintFileContenet("MyFile.txt");
  return 0;
}