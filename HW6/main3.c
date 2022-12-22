#include <stdio.h>
int main() {
    int year = 2022;
    if ((!(year % 4) && (year % 100)) || !(year % 400))
	    printf("Year %d is a leap year.\n", year);
    else
	    printf("Year %d is not a leap year.\n", year);
    return 0;
}


/* HW6 - main3.c
// Instruction:
//   1. Given a number, year.
//   2. Examine if year is leap.
//   3. Rules to determine if the year is leap:
//      (a) if year mod 4 == 0 --> it is leap
//      (b) but, year mod 100 == 0 --> it is NOT leap
//      (c) yet, when year mod 400 == 0 --> it is leap
//   4. Output format is not specified.
//
// Key Idea: boolean algebra, modulo (%)
// Features:
//   (1) ternary operator (a ? b : c)
//   (2) split of printf()
//   (2) argc/argv with loop
//   (3) atoi() with <stdlib.h>
//   (4) type bool <stdbool.h>
//   (5) function & function prototype
//   (6) C-style comments

#include <stdio.h>       // printf()
#include <stdlib.h>      // atoi()
#include <stdbool.h>     // bool, not necessary to g++

// function prototype
bool isLeap(int year);
void message(int year);

// main()
int main(int argc, char* argv[]) {
    if (argc == 1)
        message(2022);   // default behavior if no argument
    else
        for (int i = 1; i < argc; i++)
            message(atoi(argv[i]));

    return 0;            // exit program with error code 0
}

// Check whether the year is a leap year or not.
bool isLeap(int year) {
    return (!(year % 4) && (year % 100)) || !(year % 400);
}

// Generate an ouput to the screen.
void message(int year) {
    printf("Year %d is %s leap year.\n", year,
        isLeap(year) ? "a" : "not a");
}
*/
