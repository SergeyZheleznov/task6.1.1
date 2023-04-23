#include"math_func.h"

int summ1(int a, int b) {
    return a + b;
}

int sub1(int a, int b) {
    int res;
    return res = a - b;
}

int mult1(int a, int b) {
    int res;
    return res = a * b;
}

int div1(int a, int b) {
    int res;
    return res = a / b;
}

int exp1(int n, int a) {
    int res;
    int tmp = n;
    if (a == 0) {
        res = 1;
        return res;
    }
    for (int i = 1; i < a; i++) {
        n *= tmp;
    }
    return n;
}
