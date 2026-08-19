#include<stdio.h>
union data
{
    char c;
    int b;

};




int main()
{
    union data d;
    d.b=256;//char只能截取到255，超过记为0
    printf("%d %d",d.c,d.b);
    d.b=255;
    printf("%d %d",d.c,d.b);
    return 0;


}
