#include<stdio.h>  

int main()
{
int num=1;
int sum=0;
for(num;num<=100;num+=1)//++ & +=1都差不多，在原有基础上加1
{
    sum=sum+num;
}
//%d表示将字符串后面的对应位置参数用这怎整数形式打印
printf("Sum of numbers from 1 to 100 is: %d\n", sum);
    return 0;
}
