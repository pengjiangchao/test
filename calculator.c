#include "calculator.h"
#include <stdio.h>
// 实现加法
double add(double a, double b) {
    return a + b;
}

// 实现减法
double subtract(double a, double b) {
    return a - b;
}

// 实现乘法
double multiply(double a, double b) {
    return a * b;
}

// 实现除法
double divide(double a, double b) {
    if (b == 0) {
        return 0; // 防止除以零
    }
    return a / b;
}
