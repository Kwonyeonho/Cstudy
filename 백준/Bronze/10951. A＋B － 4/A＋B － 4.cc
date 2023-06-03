#include<stdio.h>
int main() {
	int A, B;
	while (scanf("%d %d", &A, &B) != EOF) { //(control+z+enter)==end
		printf("%d\n", A + B);
	}
	return 0;
}