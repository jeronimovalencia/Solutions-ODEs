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
	x = x+h;
	y[1] = y[0] + h*derivada(x,y[0]);	
	std::cout << x << " " << y[1] << std::endl;	
	for(int i=2;i<N;i++)
	{	
		y[i] = y[i-2]+2*h*derivada(x,y[i-1]);
		x = x+h;
		std::cout << x << " " << y[i] << std::endl;	
	}
		
	return 0;
}

double derivada(double x, double y)
{
	return y;
}
