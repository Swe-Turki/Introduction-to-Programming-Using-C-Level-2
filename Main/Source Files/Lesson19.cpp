#include <iostream>
using namespace std;

//HomweWork-1 
void printNumbers(int N , int M){

    if (N <= M){
        cout << M << endl;
        printNumbers( N, M-1);
    }
}

//HomweWork-2
int calculatePower (int Base , int Power ){
   
    {
    if (Power == 0)
    return 1;
    else
    {
    return (Base * calculatePower(Base, Power - 1));
    }
    }
}
int main(){

    printNumbers(1, 5);
   cout << "HomeWork-2" << endl;
   cout << calculatePower(2, 3) << endl;
    return 0;
}