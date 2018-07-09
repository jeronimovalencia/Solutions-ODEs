#include <iostream>
#include <math.h>

double x_min = 0.0;
double x_max= 4.0;
double N = 1000;
double h = (x_max-x_min)/N;


double derivada(double x, double y);

int main()
{	
	double y[int((x_max-x_min)/h)];
	y[0]=1;
	double x = x_min;	
	std::cout << x << " " << y[0] << std::endl;	
	for(int i=1;i<N;i++)
	{	
		double k1,k2,k3,k4 = 0;
		k1 = h * derivada(x,y[i-1]);
		k2 = h*derivada(x+0.5*h,y[i-1]+0.5*k1);
		k3 = h*derivada(x+0.5*h,y[i-1]+0.5*k2);
		k4 = h*derivada(x+h, y[i-1]+k3);		
		y[i] = y[i-1] + (1.0/6.0)*(k1+2.0*k2+2.0*k3+k4);
		std::cout << x << " " << y[i] << std::endl;	
		x = x+h;
	}
		
	return 0;
}

double derivada(double x, double y)
{
	return y;
}
