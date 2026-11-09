#include <stdio.h>
void change(int *a,int *b) {
	*a-=5;
	*b-=5;
}

int main(void) {
	int a;
	int b;
	while (scanf("%d %d", &a, &b)==2) {
		change(&a,&b);
		printf("%d %d", a,b);
	}
	return 0;
}

