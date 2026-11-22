#include <iostream>
#include <vector>
using namespace std;


void ReadNumbers(vector<int>& vNumbers)
{
 
    char answer;
    int number ;
    do {
     
    
    cout << "Plase Enter a Number " << endl;
    cin >> number ;
    vNumbers.push_back(number);
    cout << "Do you Want Add more ?" << endl ;
    cin >> answer ;
    cout << endl;
    }while (answer == 'Y' | answer == 'y');


}

void printVector (vector<int>& vNumbers){
 
    cout << "Numbers Vector: \n\n";
    for (int number : vNumbers){
        
        cout << number << endl;
    }
}


//Homework Solutio
int main() {
    vector<int> vNumbers ;    
    ReadNumbers( vNumbers);
    printVector(vNumbers);


 
    cout << endl;
    return 0;
  }