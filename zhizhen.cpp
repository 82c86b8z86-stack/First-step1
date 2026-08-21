#include<stdio.h>

int main()
{
    int a=10;
    int *p=&a;//获取a的地址并赋值给指针变量p
    *p=100;//通过指针变量p修改a的值
    printf("%d\n",a);//输出a的值
    return 0;




}