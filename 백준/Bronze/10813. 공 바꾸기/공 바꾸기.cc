#include<stdio.h>
int main() {
	int N, M; //N=바구니개수M=교환횟수
	int a=0;
	scanf("%d %d", &N, &M);
	int i, j;
	int arr[1000] = { 0, };
	for (int i = 1; i <= N; i++) { 
		arr[i] = i; //바구니에 있는 공 숫자
	}
	for (int k = 0; k < M; k++) {
		scanf("%d %d", &i,&j);
		a = arr[i];      //i,j바구니에 있는 공 바꾸기
		arr[i] = arr[j]; 
		arr[j] = a;
	}
	for (int i = 1; i <= N; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}