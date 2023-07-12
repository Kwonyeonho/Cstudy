#include<stdio.h>
int main() {
	int n;
	int a = 0;
	int arr[10] = { 0, };
	int arr2[42] = { 0, };//42로 나누게되면 나머지값은 최대 42개가 나오게된다.
	int count=0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		a = n % 42; //입력값을 42로 나눈 나머지값을 
		arr[i] = a; //1번 배열에 차례대로 대입
	}
	for (int j = 0; j < 42; j++) {
		for (int i = 0; i < 10; i++) {
			if (arr[i] == j) { //1번 배열의 값이 j와 같다면
				arr2[j]++; //2번 배열의 j번째의 값에 +1
			}
		}
	}
	for (int j = 0; j < 42; j++) {
		if (arr2[j] != 0) { //만약 배열의 값이 0이 아니라면
			count++; //count+1
		}
	}
	printf("%d\n", count);
	return 0;
}