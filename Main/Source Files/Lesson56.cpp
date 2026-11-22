#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void SaveVectorToFile(string FileName, vector<string> vFileContent) {

  fstream MyFile;

  MyFile.open("MyFile.txt", ios::out);

  if (MyFile.is_open()) {

    for (string &Line : vFileContent) {
      if (Line != "") {
        MyFile << Line << endl;
      }
    }

    MyFile.close();
  }
}

// Save Vector to File
int main() {
  vector<string> vFileContenet{"Ali", "Shadi", "Maher", "Turki", "Zyad"};

  SaveVectorToFile("MyFile.txt", vFileContenet);
  return 0;
}