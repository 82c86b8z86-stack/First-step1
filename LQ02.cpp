#include <iostream>
using namespace std;
int main()
{
  int m,cnt,n,a,b,c,d,e,f,g;
  cnt=0;
  cin>>m;
  while(m>0)
  {
    a=m/1000000;
    b=(m-a*1000000)/100000;
    c=(m-a*1000000-b*100000)/10000;
    d=(m-a*1000000-b*100000-c*10000)/1000;
    e=(m-a*1000000-b*100000-c*10000-d*1000)/100;
    f=(m-a*1000000-b*100000-c*10000-d*1000-e*100)/10;
    g=m-a*1000000-b*100000-c*10000-d*1000-e*100-f*10;
    n=a+b+c+d+e+f+g;
    cnt++;
    m-=n;
  }
  cout<<cnt<<endl;
  return 0;
}