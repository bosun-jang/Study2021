#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
void main() {
	printf("Hello World!!");
    int arr[4] = { 2,6,8,14 };
    solution(arr, 4);
}

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len) {
    int answer = 0;
    int i, j = 100;
    int num = 0;
    int gcf = 0;
    while (j > 0) {
        for (i = 0; i < arr_len; i++) {
            if (arr[i] % j) {
                num = 0;
                j--;
                continue;
            }
            else num++;
        }
        if (num == arr_len) {
            break;
        }
    }
    for (i = 0; i < arr_len - 1; i++) {
        answer = arr[i] * arr[i + 1];
        answer = answer / j;
    }
    return answer;
}