#include<stdio.h>
int gcd(int da,int xiao)
{
	int temp;
	while(xiao!=0)
	{
		temp=da%xiao;
		da=xiao;
		xiao=temp;
	}
	return da;
}
//int main()
//{
//	int da,xiao,a;
//	printf("input a big num then a smaller one,input -1 -1 to exit\n");
//	if(da!=EOF&&xiao!=EOF)
//	{
//		a=gcd(da,xiao);
////	    {
//	    	printf("input a big num then a smaller one,input -1 -1 to exit\n");
//	    	scanf("%d\n %d\n",&da,&xiao);
//		    a=gcd(da,xiao);
//	        printf("%d\n",a);
//		}
//	}
//	else
//	{
//		return 0;
//	}
//	
//	return 0;
//}
//ds refix 
int main()
{
    int da, xiao, a;
    
    printf("input a big num then a smaller one, input -1 -1 to exit\n");
    
    // 关键：判断 scanf 的返回值是否成功读取了 2 个数
    while (scanf("%d %d", &da, &xiao) == 2)
    {
        // 检查是否是退出信号（-1 -1）
        if (da == -1 && xiao == -1)
        {
            break;  // 退出循环
        }
        
        // 计算并输出最大公约数
        a = gcd(da, xiao);
        printf("gcd(%d, %d) = %d\n", da, xiao, a);
        
        // 提示用户继续输入
        printf("input a big num then a smaller one, input -1 -1 to exit\n");
    }
    
    return 0;
}