#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = 0;
    answer= (num1-num2);
    return answer;
}
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("%d",solution(num1,num2));
    
}