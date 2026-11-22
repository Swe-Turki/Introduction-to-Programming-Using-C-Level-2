#include <iostream>
using namespace std;

void MyFunc() {
static int Number = 1;
cout << "Value of Number: " << Number << "\n";
Number ++;
}

//Static Variables
int main()
{

MyFunc();

MyFunc();

MyFunc();

return 0;

}