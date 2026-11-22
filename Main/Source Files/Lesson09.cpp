#include <iostream>
#include "../Header Files/MyLib.h"
using namespace std ;

int main (){

//check if the number is Positive or Negative.
int number = MyLib::ReadNumber();
number > 0 ? cout << "Positive" : cout << "Negative"; cout << "\n";

//check if the number is Zero, Positive, or Negative.
cout << "\n";
int number2 = MyLib::ReadNumber();
number2 == 0 ?  cout << "Zero" : number2 > 0 ? cout << "Positive" : cout << "Negative"; cout << "\n";

}