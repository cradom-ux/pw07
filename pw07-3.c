#include <stdio.h>
#include <math.h>

double convert(double a, double b) {
	if (a>b) {
		return fmod(a,b);
	}

	else  {
		return fmod(b,a);
	}
}
int main(void) {
	double a,b;
	while  (scanf("%lf %lf", &a, &b)==2) {
		if (a==0 || b==0) {
			printf("невозможно вычислить\n");
		}
		else  {
			printf("%.4lf\n",convert(a,b));
		}
	}
	return 0;
}
