#include <stdio.h>
void print_spaces(int i) {
    printf("%*c", i*2, ' ');
    return;
}

void print_stars(int i, int rows) {
    int count = (rows - i) * 2 - 1;
    for (int j = 0; j < count; j++) {
        if (j == count-1)
            printf("*");
        else
            printf("* ");
    }
    printf("\n");
    return;
}

int main() {
    int rows = 5;    // height
    for (int i = 0; i < rows; i++) {
        if (i)
            print_spaces(i);
        print_stars(i, rows);
    }
    return 0;
}
