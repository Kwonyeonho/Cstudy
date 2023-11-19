#include<stdio.h>
main() {
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	b = b + c;
	if (b >= 60) {
		a = a + (b / 60);
		b = b % 60;
	}
	if (a >= 24) {
		a = a % 24;
	}
	printf("%d %d", a , b);
	return 0;
}