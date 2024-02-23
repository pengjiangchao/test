#include <stdio.h>
#include "calculator.h"

int main() {
    double a = 10;
    double b = 5;

    printf("加法测试：%f + %f = %f\n", a, b, add(a, b));
    printf("减法测试：%f - %f = %f\n", a, b, subtract(a, b));
    printf("乘法测试：%f * %f = %f\n", a, b, multiply(a, b));
    printf("除法测试：%f / %f = %f\n", a, b, divide(a, b));

    return 0;
}
