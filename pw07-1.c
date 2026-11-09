#include <stdio.h>
#include <ctype.h>
int main(void) {
	char ch;
	while((ch=getchar())!='\n') {
		if(ch=='a') {
			ch='z';
		}
		else if (ch=='A') {
			ch='Z';
		}
		else if (isalpha(ch)) {
			ch=ch-1;
		}
		printf("%c", ch);
	}
	printf("\n");
	return 0;
}
