/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2022-07-25 13:41:48
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-07-25 14:08:50
 */
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    // 1. 指针常量
    // 本质是一个常量，该常量是指针类型。指针本身是一个常量，不可修改，始终指向同一地址
    int a = 100;
    int b = 88;
    int* const p0 = &a;

    printf("******指针常量 pointer const******\n");
    printf("%p %d\n", &a, a);
    printf("%p %d\n", p0, *p0);

    // p0 = &b;  // 指针常量始终指向同一地址，不可修改
    *p0 = 2;
    printf("%p %d\n", &a, a);
    printf("%p %d\n", p0, *p0);

    // 2. 常量指针
    int m = 19;
    int n = 80;
    const int *p1 = &m;
    // int const *p1 = &m; // 等同于 const int *p1 = &m;

    printf("******常量指针 const pointer******\n");
    printf("%p %d\n", &m, m);
    printf("%p %d\n", p1, *p1);

    p1 = &n;
    // *p1 = 2;
    printf("%p %d\n", &m, m);
    printf("%p %d\n", p1, *p1);

    return 0;
}