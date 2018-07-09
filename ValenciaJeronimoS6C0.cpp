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
		y[i] = y[i-1]+h*derivada(x,y[i-1]);
		x = x+h;
		std::cout << x << " " << y[i] << std::endl;	
	}
		
	return 0;
}

double derivada(double x, double y)
{
	return y;
}
