#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p=(int*)malloc(4);
    printf("%p\n",p);
    printf("%d\n",*p);
    *p=100;
    printf("%d\n",*p);
    free(p);
    return 0;

}