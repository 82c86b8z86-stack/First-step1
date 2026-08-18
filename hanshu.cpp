#include<stdio.h>
void menu()
{
    printf("begin");
    printf("end");
}
int jisuan(int a,int b)
{
    return a+b;
}
int main()
{
    menu();
   int  a,b;
   scanf("%d %d",&a,&b);
    int result=jisuan(a,b);
    printf("result=%d",result);
}