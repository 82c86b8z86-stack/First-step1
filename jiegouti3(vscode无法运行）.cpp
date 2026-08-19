#include<stdio.h>
struct stu_info 
{
    char name[10];
    int age;
    float score;
};
int main()
{
    struct stu_info stu1;
    scanf("%s",stu1.name);
    scanf("%d",&stu1.age);
    scanf("%f",&stu1.score);
    printf("name:%s,age:%d,score:%f",stu1.name,stu1.age,stu1.score);
    return 0;
}