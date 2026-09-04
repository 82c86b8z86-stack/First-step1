#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#define ll long long
using namespace std;
int bx,by,ma_x,ma_y;
ll f[40][40];
bool s[40][40];
int main()
{
	scanf("%d %d %d %d",&bx,&by,&ma_x,&ma_y);
	bx+=2,by+=2,ma_x+=2,ma_y+=2;
	f[2][1]=1;
	s[ma_x][ma_y]=1;
	for(int i=1;i<=2;i++)
	 {
        for(int signX=-1;signX<=1;signX+=2)  //signX/Y using in define +/- so "+=2" suing here to jump 0 in order to shift in 1 and -1
		 {
            for(int signY=-1;signY<=1;signY+=2)
			 {
               int tx = ma_x+i*signX;
               int ty = ma_y+(3 - i)*signY;
               if(tx >= 0&&ty>=0&&tx<=bx&&ty<=by) 
			   {
                 s[tx][ty] = true;
               }
             }
         }
     } 
	
	for(int i=2;i<=bx;i++)
	{
		for(int j=2;j<=by;j++)
		{
			if(s[i][j])//                                                     attenstion:if(x) == if(x!=0),here could be x==1 but x=1(unexcepted)
			{
				continue;
			}
			f[i][j]=f[i-1][j]+f[i][j-1];
			
		}
	}
	printf("%lld\n",f[bx][by]);
	return 0;
	
}