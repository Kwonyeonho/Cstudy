#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    return num1*num2;
}
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    printf("%d",solution(n1,n2));
}