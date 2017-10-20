/* Calcula pi pelo método de Lagrange
 *
 * Autor: Laura Amaral
 * Data: 20/10/2017
 */


#include <stdio.h>
#include <math.h>



double lagrange(int n) {

	double a1=1.0, a=1.0, b=1.0/sqrt(2.0), t=1.0/4.0, p=1.0;
	int i;

	for(i=0; i<n; i++) {

		a1 = (a+b)/2;
		b = sqrt(a*b);
		t = t - p*(pow((a-a1),2.0));
		p = 2.0*p;
		a = a1;
	}

	return pow(a+b,2)/(4*t);

}

int main() {

	printf("O valor de pi é: %.20f\n", lagrange(20));

}
