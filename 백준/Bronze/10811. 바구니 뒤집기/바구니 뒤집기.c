#include<stdio.h>
void reverse(int ary[101], int i, int j) {//i번째 숫자와 j번째 숫자 교환 
	for (int k = i - 1; k < j; k++) {//그이후 i는 ++ j는 -- 번재 숫자 교환
		int temp = 0;
		temp = ary[k];
		ary[k] = ary[j - 1];
		ary[j - 1] = temp;
		j--;
	}	
}
int main() {
	int N, M,i,j;
	scanf("%d %d", &N, &M);
	int ary[101] = {0,};	
	for (int k = 0; k < N; k++) {
		ary[k] = k + 1;
	}
	for (int k = 0; k < M; k++) {
		scanf("%d %d", &i, &j);
		reverse(ary, i, j);
	}
	for (int k = 0; k < N; k++) {
		printf("%d ", ary[k]);
	}
	return 0;
}

