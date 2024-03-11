#define _CRT_SECURE_NO_WARNINGS
#define modify_value() :
#include <stdio.h>
#include <string.h>

int min(int x, int y, int k)   //定义min函数，函数值为整型，形式参数x和y为整型
{
    int z = 0;            //min函数声明部分，定义函数用到的变量z为整形
    if (x > y)z = y;     //若x > y,将y的值赋给变量z
    else z = x;          //否则将x的值赋给变量z
    return(z);           //将z的值作为min函数值，返回到调用min函数的位置
}

int main()                 //定义主函数
{                          //主函数开始
    //int min(int x, int y); //对被调函数min的声明
    int a = 0;             //定义a，b，c
    int b = 0;
    int c = 0;
    int d = 0;

    scanf("%d,%d,%d", &a, &b, &c);   //输入变量a，b ,c的值  
    d = min(a, b, c);                  //调用min函数，将得到的值赋给d
    if (c > d)                     //将c和d进行比较
    {
        printf("min = %d\n", d);  //输出d的值
    }
    else
    {
        printf("min = %d\n", c);//输出c的值
    }

    return 0;               //返回函数值为0
}                           //主函数体结束 