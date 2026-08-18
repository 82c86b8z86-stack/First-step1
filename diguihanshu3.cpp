#include<stdio.h>
#include<cstdlib>
int add(int num)
{
    if(num==1)
    {
        return 1;
    }
    int sum=num+add(num-1);
    return sum;
}

int main()
{
    int num;
    scanf("%d",&num);
    int sum=add(num);
    printf("%d\n",sum);
    system("pause");
    return 0;

        
}
    
