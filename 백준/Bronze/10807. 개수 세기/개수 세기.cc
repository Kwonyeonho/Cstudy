#include<stdio.h>
int main() {
	int N, a[100], V,cnt=0;
	scanf("%d" ,&N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]); //N번만큼 숫자입력
	}
	scanf("%d", &V);
	for (int j = 0; j < N; j++) {
		if (a[j] == V) { //V랑 입력한 숫자가 같으면 cnt++
			cnt++;
		}
	}
	printf("%d", cnt);
}