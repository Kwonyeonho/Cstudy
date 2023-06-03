#include <stdio.h>
int main() {
	int x, n, a;
	scanf("%d %d", &n, &x);
	for (int i = 0; i <n; i++) {
		scanf("%d", &a);
		if (a < x) printf("%d ", a);// 한칸씩 띄어질려면 %d뒤에 공백
		}
	return 0;
}