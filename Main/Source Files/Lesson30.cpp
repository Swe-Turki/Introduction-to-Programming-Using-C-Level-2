#include <iostream>
#include <vector>
using namespace std;

struct stEmployee {
  string FirstName;
  string LastName;
  float Salary;
};

void ReadEmployee(vector<stEmployee> &vEmployee) {
  char answer;
  stEmployee tempEmployee;

  do {
    cout << "\nPlase Enter The firstName for Employee " << endl;
    cin >> tempEmployee.FirstName;
    cout << "\nPlase Enter The LastName for Employee " << endl;
    cin >> tempEmployee.LastName;
    cout << "\nPlase Enter The Salary for Employee " << endl;
    cin >> tempEmployee.Salary;
    vEmployee.push_back(tempEmployee);

    cout << endl;
    cout << "\nDo you Want Add more ?" << endl;
    cin >> answer;
  } while (answer == 'Y' | answer == 'y');
}

void printVector(vector<stEmployee> &vEmployee) {
  cout << endl;
  cout << "Employee Vector: \n\n";
  for (stEmployee tempEmployee : vEmployee) {
    cout << "First Name : " << tempEmployee.FirstName << endl;
    cout << "Last Name : " << tempEmployee.LastName << endl;
    cout << "Salary : " << tempEmployee.Salary << endl;
    cout << endl;
  }
  cout << endl;
}

// Homework Solutio
int main() {

  vector<stEmployee> vEmployee;
  ReadEmployee(vEmployee);
  printVector(vEmployee);

  cout << endl;
  return 0;
}
