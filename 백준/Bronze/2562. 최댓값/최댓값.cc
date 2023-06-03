#include<stdio.h>
int main() {
	int arr[10];//9까지 배열을 사용해야하므로 [10]으로 선언
	int max = 0;
	int a;
	for (int i = 1; i <= 9; i++) {//최대값 순번을 알아야하므로 1부터시작
		scanf("%d", &arr[i]);
		if (arr[i] > max) {
			max = arr[i];
			a = i;//최대값 순번
		}
	}
	printf("%d\n%d", max, a);
	return 0;
}