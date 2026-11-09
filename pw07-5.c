#include <stdio.h>
int  gcd(int a, int b) {
	if (b==0) {
		return a;
	}
	return gcd(b, a%b);
}
int main(void) {
	int a;
	int b;
	int posrednik;
	if (scanf("%d %d", &a, &b)!=2) {
		printf("некорректный ввод\n");
		return 1;
	}
	if (a<0) {
		a=-a;
	}
	if (b<0) {
		b=-b;
	}
	if (a==0 && b==0) {
		printf("НОД нельзя определить\n");
		return 1;
	}
	int result= gcd(a,b);
	while (b!=0) {
		posrednik=a%b;
		a=b;
		b=posrednik;
	}
	printf("%d\n", a);
	printf("%d\n",result);
	return 0;
}

