#include<stdio.h>
#include<stdlib.h>
enum STATUS
{
    ON,
    OFF
};
int main()
{
    STATUS std = ON;
    enum STATUS st = OFF;
    printf("%d\n", st);
    printf("%d\n", std);
    system("pause");
    return 0;
}