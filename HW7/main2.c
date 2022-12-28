//* HW7 - main2.c
// Instruction:
//   1. Calculate pi using Gregory-Leibniz Series:
//        pi = (4/1) - (4/3) + (4/5) - (4/7) + (4/9) - ...
//   2. Find the minimum x, which makes the estimated pi
//      accurate with 5 digits (in decimal ?), i.e.,
//        pi = 3.14159 
//
// Key Ideas: (1) counting
//            (2) the content to print is determined by index
// Features:
//   (*) using two loops
//   (1) ternary operator (a ? b : c)
//   (2) split of printf()
//   (3) argc/argv with loop
//   (4) atoi() with <stdlib.h>
//   (5) function & function prototype
//   (6) C-style comments

#include <stdio.h>       // printf()
#include <stdlib.h>      // atoi()
#include <stdbool.h>     // bool

// struct prototype
/*struct BIG {
    char value[41];
    bool sign;
    char point;
};*/

// function prototype
void message(char* msg);
int PI(void);
int PI2(void);
int PI3(void);
//BIG add(BIG a, BIG b);
void test(void);

// main()
int main(int argc, char* argv[]) {
    if (argc == 1)
        PI();            // default behavior if no argument
    else if (argc == 2)
        switch (atoi(argv[1])) {
            case 1:
                PI();    // default
                break;
            case 2:
                PI2();
                break;
            case 3:
                PI3();   // BIG
                break;
            case 4:
                test();
                break;
            default:
                message("Unsupported alogrium\n");
                break;
        }
    else
        for (int i = 1; i < argc; i++)
            message(argv[i]);
    return 0;            // exit program with error code 0
}

// struct for 41 decimal digits BIG number
/*struct BIG {
  char value[41];    // 0.00000 00000 00000 00000 00000 00000 00000 ....
  bool sign = false; // false = 0 = positive;  true = 1 = negative
  char point = 1;    // default position of floating point
};*/

// Generate an ouput and print it to the screen.
void message(char* msg) {
    printf("%s\n", msg);
    return;
}

// Calculate Pi using Gregory-Leibniz Series
int PI() {
    printf("Calculate Pi using Gregory-Leibniz Series: alogrium #1\n");
    double PI = 0.0;
    int i = 1;           // iteration

    for (i = 1; i < 400000; i++) {
        PI += (((i+1) % 2) * (-2) + 1) * 4.0 / (2 * i - 1);
        if (PI - 3.14159 < 0.000001)
            if (3.14159 - PI < 0.000001) {
                printf("%d, %.10f\n", i, PI);
                break;
            }
    }
    return i; 
}

int PI2() {
    printf("Calculate Pi using Gregory-Leibniz Series: alogrium #2 (long long)\n");
    //             123456789012345678
    long long PI = 000000000000000000ll;
    long long er =      1000000000000ll;  // error
    //                  1234567890123
    int i;                    // iteration

    for (i = 1; i < 800000; i++) { //    123456789012345678
        PI += (((i+1) % 2) * (-2) + 1) * 400000000000000000ll / (2 * i - 1);
        printf("%d, %lld, %lld\n", i, PI, PI/er);
        if (PI/er == 314159)
            break;
    }
    printf("%d, %lld, %lld\n", i, PI, PI/er);
    printf("x = %.12f\n", (double) (((i+1)%2)*(-2)+1)*4/(2*i-1));
    return i;
}

int PI3() {
    printf("Calculate Pi using Gregory-Leibniz Series: alogrium #3 (big number, 41 digits)\n");

    
}
/*
BIG add(BIG a, BIG b) {
    return a;
}*/

void test() {
    long long a = 3141592653ll;
    long long b =      10000ll;
    printf("%lld, %lld, %lld\n", a, b, a/b);
    long long c = 314159265358979323ll;
    //            123445678901234567
    printf("%lld\n", c);
    return;
}
