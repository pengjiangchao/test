#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calculator.h"

// 用于比较两个double类型的数值是否相等
#define EPSILON 0.00001

int main() {
    double a, b, result, expected;
    int test_passed = 0;

    // 进行多次测试
    for (int i = 0; i < 100; i++) {
        a = (double)rand() / RAND_MAX; // 随机数
        b = (double)rand() / RAND_MAX; // 随机数

        result = add(a, b);
        expected = a + b;
        if (fabs(result - expected) < EPSILON) {
            test_passed++;
        } else {
            printf("Error in add: expected %f but got %f\n", expected, result);
        }

        result = subtract(a, b);
        expected = a - b;
        if (fabs(result - expected) < EPSILON) {
            test_passed++;
        } else {
            printf("Error in subtract: expected %f but got %f\n", expected, result);
        }

        result = multiply(a, b);
        expected = a * b;
        if (fabs(result - expected) < EPSILON) {
            test_passed++;
        } else {
            printf("Error in multiply: expected %f but got %f\n", expected, result);
        }

        result = divide(a, b);
        expected = a / b;
        if (fabs(result - expected) < EPSILON) {
            test_passed++;
        } else {
            printf("Error in divide: expected %f but got %f\n", expected, result);
        }
    }

    printf("Test results: %d passed, %d failed.\n", test_passed, 400 - test_passed);

    return 0;
}
