
#include <stdio.h>

/* Function declarations */
int sub(int a, int b);
int mul(int a, int b);

/* main function */
int main() {
    int x = 10, y = 5;

    printf("Subtraction: %d\n", sub(x, y));
    printf("Multiplication: %d\n", mul(x, y));

    return 0;
}

/* sub function */
int sub(int a, int b) {
    return a - b;
}

/* mul function */
int mul(int a, int b) {
    return a * b;
}
