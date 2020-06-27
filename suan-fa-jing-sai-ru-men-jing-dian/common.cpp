//
// Created by zhangjianghao on 6/27/2020.
//
#include<stdio.h>
#include "math.h"

int main(){
    printf("%.2f\n", 8.0/5.0);
    printf("%d\n", 8.0/5.0); // double值强制用有符号int值表示，double值大于1时展示的就是负数
    printf("%d\n", 5.0/8.0); // double值强制用有符号int值表示，double值小于1时展示的就是零

    // 计算复杂算术
    double d = 1 + 2 * sqrt(3) / (5 - 0.1);
    printf("%.2f\n", d);

    // 输出单个字符
    char a;
    scanf("%s", &a);
    cout << a << endl;
}