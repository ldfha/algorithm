#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int countFunc(const char* s, int len){
    int count = 0;
    for(int i = 0; i < len; i++){
        count += (s[i] == '0') ? 1 : 0;
    }
    return count;
}

int* bin_count(int decimal){
    int* result = (int*)malloc(sizeof(int) * 2);
    int count = 0;
    int i = 0;
    while(decimal != 0){
        count = (decimal % 2 == 0) ? count + 1 : count;
        decimal /= 2;
        i++;
    }
    result[0] = count;
    result[1] = i;
    return result;
}
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 2);
    int* result = (int*)malloc(sizeof(int) * 2);
    int total_count = 0;
    int iter = 1;
    
    int len = strlen(s);
    int count = countFunc(s, len);
    total_count += count;
    len = len - count;
    while(len != 1){
        result = bin_count(len);
        len = result[1] - result[0];
        count = result[0];
        total_count += count;
        iter += 1;
    }
    answer[0] = iter;
    answer[1] = total_count;
    
    return answer;
}