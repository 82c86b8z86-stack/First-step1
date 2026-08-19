#include<stdio.h>

int main()
{
    int scores[25]={0};//定义一个数组，存放25个学生的成绩
    scores[0]=90;
    scores[2]=60;
    printf("%d %d %d\n",scores[0],scores[1],scores[2]);//输出数组中第1个、第2个、第3个元素的值
    return 0;
    
}