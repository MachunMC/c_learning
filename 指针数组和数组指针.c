/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2022-07-25 11:06:20
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-07-25 13:41:36
 */
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char *arr[4] = {"C", "C++", "Python", "Golang"};  // 定义一个指针数组
    char (*p)[4]; // 定义一个数组指针

    for (int i = 0; i < 4; i++)
    {
        printf("arr[%d] addr:%p, value:%s\n", i, arr[i], arr[i]);
    }

    // int arr[5]={1, 2, 3, 4, 5};
    // int (*p1)[5] = &arr;
    // /*下面是错误的*/
    // int (*p2)[5] = arr; // 这里会报错，等号左右两边类型不一致

    return 0;
}