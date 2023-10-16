#include <stdio.h>
#include <math.h>
int main()
{
	double x,y,z,x1,y1,z1;
	double u3,u1,u2,minu;
	minu = 999999;
	u1 = 0;
	u2 = 0;
	u3 = 0;
	x = 0;
	y = 0;
	z = 0;
	for (x=0;x<=3;x=x+0.5)
	{
		for (y=2;y<=4;y=y + 0.5)
		{
			for (z=0.5;z<=1.5;z=z+0.5)
			{
				u1 = -sqrt(pow(y,2)+((4*pow(x,2))/3));
				u2 = ((5*pow(cos(x*y),4))/x*z);
				u3 = u1+u2;
				printf ("x = %6f y = %6f z = %6f u(x,y,z) = %6f\n",x,y,z,u3);
				if (u3>2.1){
					if (u3<minu)
						minu = u3;
						x1 = x;
						y1 = y;
						z1 = z;
				}
			}
		}
	}
	printf ("Минимальное U>2.1 равна %6f и достигается при x = %6f y = %6f z = %6f\n",minu,x1,y1,z1);
}
