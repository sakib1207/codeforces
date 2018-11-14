#include<stdio.h>
#include<math.h>
int  main()
{
	int  x,y,z,t1,t2,t3,k=0,l=0,m=0,n=0;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t1,&t2,&t3);
	if(1<=x&&x<=1000&&1<=y&&y<=1000&&1<=z&&z <=1000&&1<=t1&&t1<=1000&&1<=t2&&t2<=1000&&1<=t3&&t3<=1000&&x!=y)
	{
		k=abs(y-x);
		n=abs(x-z);
        l=(k*t1);
	    m=(3*t3)+((k+n)*t2);
	if(l>=m)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	}
	return 0;
}
