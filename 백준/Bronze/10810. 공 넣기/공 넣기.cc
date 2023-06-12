#include <stdio.h>

int main() {

    int n, m;
    int arr[101] = { 0, };
    int a, b, c;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &a, &b, &c);
        for (int k = a; k <= b; k++) {
            arr[k] = c;
        }
    }

    for (int j = 1; j <= n; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}


