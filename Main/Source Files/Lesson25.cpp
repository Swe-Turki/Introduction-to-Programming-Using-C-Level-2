#include <iostream>
#include <cstdio>

using namespace std;

//String and Char Format (printf)
int main() {

char Name[] = "Turki Alotaibi";



// print string and String
printf("Dear %s, How are you?\n\n", Name);


char c = 'T';
printf("Setting the width of c :%*c \n", 1, c);
printf("Setting the width of c :%*c \n", 2, c);
printf("Setting the width of c :%*c \n", 3, c);
printf("Setting the width of c :%*c \n", 4, c);
printf("Setting the width of c :%*c \n", 5, c);
return 0;
}