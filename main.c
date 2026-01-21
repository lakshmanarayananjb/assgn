#include <stdio.h>

int sub(int a, int b);
int add(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main() {
    int x = 10, y = 5;

    printf("Subtraction: %d\n", sub(x, y));
    printf("Addition: %d\n", add(x, y));
    printf("Multiplication: %d\n", mul(x, y));
    printf("division: %d\n", div(x, y));
    return 0;
}

int sub(int a, int b) {
    return a - b;
}

int add(int a, int b) {
    return a + b;
}
int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    return a / b;
}
