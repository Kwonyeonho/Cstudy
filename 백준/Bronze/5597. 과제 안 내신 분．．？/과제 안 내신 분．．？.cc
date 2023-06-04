#include<stdio.h>
int main() {
	int arr[30] = {0,};
	for (int i = 0; i < 28; i++){
		int n;
		scanf("%d", &n);
		arr[n - 1]++; // 인덱스는 0부터 시작하므로 입력받은 n에서 -1
	}
	for (int j = 0; j < 30; j++) {
		if (arr[j] == 0) {
			printf("%d\n", j + 1); //j는 0부터 29까지 반복되므로 원하는 숫자를 출력하려면 +1
		}
	}
	return 0;
}