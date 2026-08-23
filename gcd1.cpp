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
int main()
{
	int da,xiao,a;
	printf("input a big num then a smaller one,input -1 -1 to exit\n");
	while(da!=EOF&&xiao!=EOF)
	{
		scanf("%d\n %d\n",&da,&xiao);
		a=gcd(da,xiao);
	    printf("%d\n",a);
	}
	
	return 0;
}