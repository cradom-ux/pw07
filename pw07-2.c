#include <stdio.h>
#include <ctype.h>
int main(void) {
	int world=0;
	int ch;
	int vnut=0;
	int symb=0;
	while ((ch=getchar())!= EOF) {
		symb++;
		if (isalpha(ch)) {
			vnut++;
		}
		else {
			if (vnut==5) {
				world++;
			}
			vnut=0;
		}
	}
	if (vnut==5) {
		world++;
	}
	printf("%d\n",world);
	printf("%d\n",symb);
	return 0;
}
