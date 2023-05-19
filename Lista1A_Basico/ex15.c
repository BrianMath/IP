#include <stdio.h>

int main() {
	double a, b, c, d, e, f, x, y;
	scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

	// Resolver um sistema de duas equações lineares usando a Regra de Cramer
	// a*x + b*y = c 	<=>		|a b| |c| 
	// d*x + e*y = f	<=> 	|d e| |f|
	//
	// x == det|c b| / det|a b| == (c*e - b*f) / (a*e - b*d)
	//		   |f e|      |d e|
	//
	// y == det|a c| / det|a b| == (a*f - c*d) / (a*e - b*d)
	//		   |d f|      |d e|

	x = (c*e - b*f) / (a*e - b*d);
	y = (a*f - c*d) / (a*e - b*d);

	printf("O VALOR DE X E = %.2f\n", x);
	printf("O VALOR DE Y E = %.2f\n", y);

	return 0;
}